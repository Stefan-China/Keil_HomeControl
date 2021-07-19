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
#include "usart2.h"        //������Ҫ��ͷ�ļ�
#include "usart3.h"        //������Ҫ��ͷ�ļ�
#include "stm32f10x.h"     //������Ҫ��ͷ�ļ�
#include "main.h"

#include "bsp_SysTick.h"


#include "timer1.h"        //������Ҫ��ͷ�ļ�
#include "timer3.h"        //������Ҫ��ͷ�ļ�
#include "timer4.h"        //������Ҫ��ͷ�ļ�
#include "wifi.h"	       //������Ҫ��ͷ�ļ�

#include "./led/bsp_led.h"   
#include "mqtt.h"          //������Ҫ��ͷ�ļ�

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
/*������������2�����жϺ���                        */
/*��  ������                                       */
/*����ֵ����                                       */
/*-------------------------------------------------*/
void USART2_IRQHandler(void)   
{                      
	if(USART_GetITStatus(USART2, USART_IT_RXNE) != RESET){  //���USART_IT_RXNE��־��λ����ʾ�����ݵ��ˣ�����if��֧
		if(Connect_flag==0){                                //���Connect_flag����0����ǰ��û�����ӷ�����������ָ������״̬
			if(USART2->DR){                                 //����ָ������״̬ʱ������ֵ�ű��浽������	
				Usart2_RxBuff[Usart2_RxCounter]=USART2->DR; //���浽������	
				Usart2_RxCounter ++;                        //ÿ����1���ֽڵ����ݣ�Usart2_RxCounter��1����ʾ���յ���������+1 
			}		
		}else{		                                        //��֮Connect_flag����1�������Ϸ�������	
			Usart2_RxBuff[Usart2_RxCounter] = USART2->DR;   //�ѽ��յ������ݱ��浽Usart2_RxBuff��				
			if(Usart2_RxCounter == 0){    					//���Usart2_RxCounter����0����ʾ�ǽ��յĵ�1�����ݣ�����if��֧				
				TIM_Cmd(TIM4,ENABLE); 
			}else{                        					//else��֧����ʾ��Usart2_RxCounter������0�����ǽ��յĵ�һ������
				TIM_SetCounter(TIM4,0);  
			}	
			Usart2_RxCounter ++;         				    //ÿ����1���ֽڵ����ݣ�Usart2_RxCounter��1����ʾ���յ���������+1 
		}
	}
} 
/*-------------------------------------------------*/
/*����������ʱ��4�жϷ�����                      */
/*��  ������                                       */
/*����ֵ����                                       */
/*-------------------------------------------------*/
void TIM4_IRQHandler(void)
{
	if(TIM_GetITStatus(TIM4, TIM_IT_Update) != RESET){                //���TIM_IT_Update��λ����ʾTIM4����жϣ�����if	
		
		memcpy(&MQTT_RxDataInPtr[2],Usart2_RxBuff,Usart2_RxCounter);  //�������ݵ����ջ�����
		MQTT_RxDataInPtr[0] = Usart2_RxCounter/256;                   //��¼���ݳ��ȸ��ֽ�
		MQTT_RxDataInPtr[1] = Usart2_RxCounter%256;                   //��¼���ݳ��ȵ��ֽ�
		MQTT_RxDataInPtr+=RBUFF_UNIT;                                  //ָ������
		if(MQTT_RxDataInPtr==MQTT_RxDataEndPtr)                       //���ָ�뵽������β����
			MQTT_RxDataInPtr = MQTT_RxDataBuf[0];                     //ָ���λ����������ͷ
		Usart2_RxCounter = 0;                                         //����2������������������
		TIM_SetCounter(TIM3, 0);                                      //���㶨ʱ��6�����������¼�ʱping������ʱ��
		TIM_Cmd(TIM4, DISABLE);                        				  //�ر�TIM4��ʱ��
		TIM_SetCounter(TIM4, 0);                        			  //���㶨ʱ��4������
		TIM_ClearITPendingBit(TIM4, TIM_IT_Update);     			  //���TIM4����жϱ�־ 	
	}
}
/*-------------------------------------------------*/
/*����������ʱ��3�жϷ�����                      */
/*��  ������                                       */
/*����ֵ����                                       */
/*-------------------------------------------------*/
void TIM3_IRQHandler(void)
{
	if(TIM_GetITStatus(TIM3, TIM_IT_Update) != RESET){   //���TIM_IT_Update��λ����ʾTIM3����жϣ�����if	
		switch(Ping_flag){                               //�ж�Ping_flag��״̬
			case 0:										             //���Ping_flag����0����ʾ����״̬������Ping����  
					MQTT_PingREQ(); 					         //���Ping���ĵ����ͻ�����  
					break;
			case 1:										             //���Ping_flag����1��˵����һ�η��͵���ping���ģ�û���յ��������ظ�������1û�б����Ϊ0�������������쳣������Ҫ��������pingģʽ
					TIM3_ENABLE_2S(); 				       	 //���ǽ���ʱ��6����Ϊ2s��ʱ,���ٷ���Ping����
					MQTT_PingREQ();  					         //���Ping���ĵ����ͻ�����  
					break;
			case 2:										             //���Ping_flag����2��˵����û���յ��������ظ�
			case 3:				                         //���Ping_flag����3��˵����û���յ��������ظ�
			case 4:				                         //���Ping_flag����4��˵����û���յ��������ظ�	
					MQTT_PingREQ();  					 //���Ping���ĵ����ͻ����� 
					break;
			case 5:										 //���Ping_flag����5��˵�����Ƿ����˶��ping�����޻ظ���Ӧ�������������⣬������������
					Connect_flag = 0;                    //����״̬��0����ʾ�Ͽ���û���Ϸ�����
					TIM_Cmd(TIM3,DISABLE);               //��TIM3 				
					break;			
		}
		Ping_flag++;           		             		 //Ping_flag����1����ʾ�ַ�����һ��ping���ڴ��������Ļظ�
		//TempHumi_State();
		
		TIM_ClearITPendingBit(TIM3, TIM_IT_Update);      //���TIM3����жϱ�־ 	
	}
}
void TIM2_IRQHandler(void)
{	
	if(TIM_GetITStatus(TIM2, TIM_IT_Update) != RESET){  //���TIM_IT_Update��λ����ʾTIM2����жϣ�����if	
		//TempHumi_State();
		Command_State();
		TIM_ClearITPendingBit(TIM2, TIM_IT_Update);     //���TIM2����жϱ�־ 	
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

// �����жϷ�����
void DEBUG_USART_IRQHandler(void)
{
 // uint8_t ucTemp;
	if(USART_GetITStatus(DEBUG_USARTx,USART_IT_RXNE)!=RESET)
	{		
		//ucTemp = USART_ReceiveData(DEBUG_USARTx);
   // USART_SendData(DEBUG_USARTx,ucTemp);    
	}	 
}



// ����3�����ж�
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

// ����5�жϷ�����
void DEBUG_USART5_IRQHandler(void)
{
  
	if(USART_GetITStatus(DEBUG_USART5,USART_IT_RXNE)!=RESET)
	{		
		RxBufUart1_Set[RxCountUart1_Set] = USART_ReceiveData(DEBUG_USART5);
    RxCountUart1_Set++;
		//ʶ�𴮿�ͷ3C
		if((RxBufUart1_Set[0] == 0x3C)) ;
		else RxCountUart1_Set=0;
		//�������16 ����	
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
