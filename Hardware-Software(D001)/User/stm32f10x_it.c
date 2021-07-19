/**
  ******************************************************************************
  * @file    Project/STM32F10x_StdPeriph_Template/stm32f10x_it.c 
  * @author  MCD Application Team
  * @version V3.5.0
  * @date    08-April-2011
  * @brief   Main Interrupt Service Routines.
  *          This file provides template for all exceptions handler and 
  *          peripherals interrupt service routine.
  ******************************************************************************
  * @attention
  *
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTI
  
  AL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  *
  * <h2><center>&copy; COPYRIGHT 2011 STMicroelectronics</center></h2>
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "stm32f10x_it.h"
#include "usart.h"
#include "usart2.h"        //包含需要的头文件
#include "usart3.h"        //包含需要的头文件
#include "stm32f10x.h"     //包含需要的头文件
#include "main.h"

#include "bsp_SysTick.h"


#include "timer1.h"        //包含需要的头文件
#include "timer3.h"        //包含需要的头文件
#include "timer4.h"        //包含需要的头文件
#include "wifi.h"	       //包含需要的头文件

#include "./led/bsp_led.h"   
#include "mqtt.h"          //包含需要的头文件

u8	RxCountUart1_Set = 0;   

u8	RxBufUart1_Set[32] = {0};  

u8  Bci_flag=0;
/** @addtogroup STM32F10x_StdPeriph_Template
  * @{
  */

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/******************************************************************************/
/*            Cortex-M3 Processor Exceptions Handlers                         */
/******************************************************************************/




/*-------------------------------------------------*/
/*函数名：串口2接收中断函数                        */
/*参  数：无                                       */
/*返回值：无                                       */
/*-------------------------------------------------*/
void USART2_IRQHandler(void)   
{                      
	if(USART_GetITStatus(USART2, USART_IT_RXNE) != RESET){  //如果USART_IT_RXNE标志置位，表示有数据到了，进入if分支
		if(Connect_flag==0){                                //如果Connect_flag等于0，当前还没有连接服务器，处于指令配置状态
			if(USART2->DR){                                 //处于指令配置状态时，非零值才保存到缓冲区	
				Usart2_RxBuff[Usart2_RxCounter]=USART2->DR; //保存到缓冲区	
				Usart2_RxCounter ++;                        //每接收1个字节的数据，Usart2_RxCounter加1，表示接收的数据总量+1 
			}		
		}else{		                                        //反之Connect_flag等于1，连接上服务器了	
			Usart2_RxBuff[Usart2_RxCounter] = USART2->DR;   //把接收到的数据保存到Usart2_RxBuff中				
			if(Usart2_RxCounter == 0){    					//如果Usart2_RxCounter等于0，表示是接收的第1个数据，进入if分支				
				TIM_Cmd(TIM4,ENABLE); 
			}else{                        					//else分支，表示果Usart2_RxCounter不等于0，不是接收的第一个数据
				TIM_SetCounter(TIM4,0);  
			}	
			Usart2_RxCounter ++;         				    //每接收1个字节的数据，Usart2_RxCounter加1，表示接收的数据总量+1 
		}
	}
} 
/*-------------------------------------------------*/
/*函数名：定时器4中断服务函数                      */
/*参  数：无                                       */
/*返回值：无                                       */
/*-------------------------------------------------*/
void TIM4_IRQHandler(void)
{
	if(TIM_GetITStatus(TIM4, TIM_IT_Update) != RESET){                //如果TIM_IT_Update置位，表示TIM4溢出中断，进入if	
		
		memcpy(&MQTT_RxDataInPtr[2],Usart2_RxBuff,Usart2_RxCounter);  //拷贝数据到接收缓冲区
		MQTT_RxDataInPtr[0] = Usart2_RxCounter/256;                   //记录数据长度高字节
		MQTT_RxDataInPtr[1] = Usart2_RxCounter%256;                   //记录数据长度低字节
		MQTT_RxDataInPtr+=RBUFF_UNIT;                                  //指针下移
		if(MQTT_RxDataInPtr==MQTT_RxDataEndPtr)                       //如果指针到缓冲区尾部了
			MQTT_RxDataInPtr = MQTT_RxDataBuf[0];                     //指针归位到缓冲区开头
		Usart2_RxCounter = 0;                                         //串口2接收数据量变量清零
		TIM_SetCounter(TIM3, 0);                                      //清零定时器6计数器，重新计时ping包发送时间
		TIM_Cmd(TIM4, DISABLE);                        				  //关闭TIM4定时器
		TIM_SetCounter(TIM4, 0);                        			  //清零定时器4计数器
		TIM_ClearITPendingBit(TIM4, TIM_IT_Update);     			  //清除TIM4溢出中断标志 	
	}
}
/*-------------------------------------------------*/
/*函数名：定时器3中断服务函数                      */
/*参  数：无                                       */
/*返回值：无                                       */
/*-------------------------------------------------*/
void TIM3_IRQHandler(void)
{
	if(TIM_GetITStatus(TIM3, TIM_IT_Update) != RESET){   //如果TIM_IT_Update置位，表示TIM3溢出中断，进入if	
		switch(Ping_flag){                               //判断Ping_flag的状态
			case 0:										             //如果Ping_flag等于0，表示正常状态，发送Ping报文  
					MQTT_PingREQ(); 					         //添加Ping报文到发送缓冲区  
					break;
			case 1:										             //如果Ping_flag等于1，说明上一次发送到的ping报文，没有收到服务器回复，所以1没有被清除为0，可能是连接异常，我们要启动快速ping模式
					TIM3_ENABLE_2S(); 				       	 //我们将定时器6设置为2s定时,快速发送Ping报文
					MQTT_PingREQ();  					         //添加Ping报文到发送缓冲区  
					break;
			case 2:										             //如果Ping_flag等于2，说明还没有收到服务器回复
			case 3:				                         //如果Ping_flag等于3，说明还没有收到服务器回复
			case 4:				                         //如果Ping_flag等于4，说明还没有收到服务器回复	
					MQTT_PingREQ();  					 //添加Ping报文到发送缓冲区 
					break;
			case 5:										 //如果Ping_flag等于5，说明我们发送了多次ping，均无回复，应该是连接有问题，我们重启连接
					Connect_flag = 0;                    //连接状态置0，表示断开，没连上服务器
					TIM_Cmd(TIM3,DISABLE);               //关TIM3 				
					break;			
		}
		Ping_flag++;           		             		 //Ping_flag自增1，表示又发送了一次ping，期待服务器的回复
		//TempHumi_State();
		
		TIM_ClearITPendingBit(TIM3, TIM_IT_Update);      //清除TIM3溢出中断标志 	
	}
}
void TIM2_IRQHandler(void)
{	
	if(TIM_GetITStatus(TIM2, TIM_IT_Update) != RESET){  //如果TIM_IT_Update置位，表示TIM2溢出中断，进入if	
		//TempHumi_State();
		Command_State();
		TIM_ClearITPendingBit(TIM2, TIM_IT_Update);     //清除TIM2溢出中断标志 	
	}
}
/**
  * @brief  This function handles NMI exception.
  * @param  None
  * @retval None
  */
void NMI_Handler(void)
{
}

/**
  * @brief  This function handles Hard Fault exception.
  * @param  None
  * @retval None
  */
void HardFault_Handler(void)
{
  /* Go to infinite loop when Hard Fault exception occurs */
  while (1)
  {
  }
}

/**
  * @brief  This function handles Memory Manage exception.
  * @param  None
  * @retval None
  */
void MemManage_Handler(void)
{
  /* Go to infinite loop when Memory Manage exception occurs */
  while (1)
  {
  }
}

/**
  * @brief  This function handles Bus Fault exception.
  * @param  None
  * @retval None
  */
void BusFault_Handler(void)
{
  /* Go to infinite loop when Bus Fault exception occurs */
  while (1)
  {
  }
}

/**
  * @brief  This function handles Usage Fault exception.
  * @param  None
  * @retval None
  */
void UsageFault_Handler(void)
{
  /* Go to infinite loop when Usage Fault exception occurs */
  while (1)
  {
  }
}

/**
  * @brief  This function handles SVCall exception.
  * @param  None
  * @retval None
  */
void SVC_Handler(void)
{
}

/**
  * @brief  This function handles Debug Monitor exception.
  * @param  None
  * @retval None
  */
void DebugMon_Handler(void)
{
}

/**
  * @brief  This function handles PendSVC exception.
  * @param  None
  * @retval None
  */
void PendSV_Handler(void)
{
}

/**
  * @brief  This function handles SysTick Handler.
  * @param  None
  * @retval None
  */
void SysTick_Handler(void)
{
	TimingDelay_Decrement();	
}

// 串口中断服务函数
void DEBUG_USART_IRQHandler(void)
{
 // uint8_t ucTemp;
	if(USART_GetITStatus(DEBUG_USARTx,USART_IT_RXNE)!=RESET)
	{		
		//ucTemp = USART_ReceiveData(DEBUG_USARTx);
   // USART_SendData(DEBUG_USARTx,ucTemp);    
	}	 
}



// 串口3接收中断
void DEBUG_USART3_IRQHandler(void) 
{
  uint8_t bic_command;
	if(USART_GetITStatus(DEBUG_USART3,USART_IT_RXNE)!=RESET)
	{		
		bic_command = USART_ReceiveData(DEBUG_USART3);
    if(bic_command== '1') Bci_flag=1;
		else if(bic_command== '2') Bci_flag=2;
		else if(bic_command== '3') Bci_flag=3;
		else if(bic_command== '4') Bci_flag=4;
		else if(bic_command== '5') Bci_flag=5;
		else if(bic_command== '6') Bci_flag=6;
		else if(bic_command== '7') Bci_flag=7;
		else if(bic_command== '8') Bci_flag=8;
		else if(bic_command== '9') Bci_flag=9;
		else if(bic_command== 'a') Bci_flag=10;
		else if(bic_command== 'b') Bci_flag=11;
		else if(bic_command== 'c') Bci_flag=12;
		else if(bic_command== 'z') Bci_flag=13;
		else ;
		
		switch(Bci_flag)
		{
			case 1:LED9_TOGGLE;  break;
			case 2:LED4_TOGGLE;  break;
			case 3:LED3_TOGGLE;  break;
			case 4:LED2_TOGGLE;  break;
			case 5:LED1_TOGGLE;  break;
			case 6:LED8_TOGGLE;  break;
			case 7:LED0_TOGGLE;  break ;
			
			case 8: if(!LED5_IN_STA) { LED5_ON;         DoctorSwitch_flag=1;    vioce_flag =  2;} else  {LED5_OFF;   DoctorSwitch_flag=0;         vioce_flag =  0; }break;
			case 9: if(!LED7_IN_STA) {LED7_ON;          CanteenSwitch_flag=1;   vioce_flag =  3;} else  {LED7_OFF;   CanteenSwitch_flag=0;        vioce_flag =  0;}break;
			case 10:if(!LED6_IN_STA) {LED6_ON;  WorkSwitch_flag=1;      vioce_flag =  4;} else  {LED6_OFF;      WorkSwitch_flag=0;           vioce_flag =  0; }break;
			case 11:if(!LED9_IN_STA) {LED9_ON;          FamilySwitch_flag=1;    vioce_flag =  5;} else  {LED9_OFF;    FamilySwitch_flag=0;        vioce_flag =  0;  }break;
			case 12:if(!LED8_IN_STA) {LED8_ON;LED9_ON;  SOSSwitch_flag=1;       vioce_flag =  6;} else  {LED8_OFF;LED9_OFF; SOSSwitch_flag=0;                vioce_flag = 0; }break;
			case 13:vioce_flag=100;break;
		}
	
		Bci_flag=0;
		Schedule();
	}	 
}

// 串口5中断服务函数
void DEBUG_USART5_IRQHandler(void)
{
  
	if(USART_GetITStatus(DEBUG_USART5,USART_IT_RXNE)!=RESET)
	{		
		RxBufUart1_Set[RxCountUart1_Set] = USART_ReceiveData(DEBUG_USART5);
    RxCountUart1_Set++;
		//识别串口头3C
		if((RxBufUart1_Set[0] == 0x3C)) ;
		else RxCountUart1_Set=0;
		//数组大于16 归零	
		if(RxCountUart1_Set>=16) RxCountUart1_Set=0;
	
	}	 

}
/**
  * @brief  This function handles PPP interrupt request.
  * @param  None
  * @retval None
  */
/*void PPP_IRQHandler(void)
{
}*/

/**
  * @}
  */ 


/******************* (C) COPYRIGHT 2011 STMicroelectronics *****END OF FILE****/
