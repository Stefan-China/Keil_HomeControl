/**
  ******************************************************************************
  * @file    bsp_led.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   led应用函数接口
  ******************************************************************************
  * @attention
  *
  * 实验平台:秉火 F103-指南者 STM32 开发板 
  * 论坛    :http://www.firebbs.cn
  * 淘宝    :https://fire-stm32.taobao.com
  *
  ******************************************************************************
  */
  
#include "./led/bsp_led.h"   

 /**
  * @brief  初始化控制LED的IO
  * @param  无
  * @retval 无
  */
void GPIO_Config(void)
{		
		/*定义一个GPIO_InitTypeDef类型的结构体*/
		GPIO_InitTypeDef GPIO_InitStructure;

		/*开启LED相关的GPIO外设时钟*/
		RCC_APB2PeriphClockCmd( LED0_GPIO_CLK | LED1_GPIO_CLK | LED2_GPIO_CLK | LED3_GPIO_CLK  |\
	 										  		LED4_GPIO_CLK | LED5_GPIO_CLK | LED6_GPIO_CLK | LED7_GPIO_CLK  |\
													  LED8_GPIO_CLK | LED9_GPIO_CLK | LED10_GPIO_CLK| LED11_GPIO_CLK  |\
														LED12_GPIO_CLK |LED13_GPIO_CLK, ENABLE);
		/*选择要控制的GPIO引脚*/
		GPIO_InitStructure.GPIO_Pin = LED0_GPIO_PIN;	

		/*设置引脚模式为通用推挽输出*/
		GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;   

		/*设置引脚速率为50MHz */   
		GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; 

		/*调用库函数，初始化GPIO*/
		GPIO_Init(LED0_GPIO_PORT, &GPIO_InitStructure);	
			
		/*选择要控制的GPIO引脚*/
		GPIO_InitStructure.GPIO_Pin = LED1_GPIO_PIN;
		GPIO_Init(LED1_GPIO_PORT, &GPIO_InitStructure);
		
		/*选择要控制的GPIO引脚*/
		GPIO_InitStructure.GPIO_Pin = LED2_GPIO_PIN;
		GPIO_Init(LED2_GPIO_PORT, &GPIO_InitStructure);
		
		/*选择要控制的GPIO引脚*/
		GPIO_InitStructure.GPIO_Pin = LED3_GPIO_PIN;
		GPIO_Init(LED3_GPIO_PORT, &GPIO_InitStructure);
		
		/*选择要控制的GPIO引脚*/
		GPIO_InitStructure.GPIO_Pin = LED4_GPIO_PIN;
		GPIO_Init(LED4_GPIO_PORT, &GPIO_InitStructure);
		
		/*选择要控制的GPIO引脚*/
		GPIO_InitStructure.GPIO_Pin = LED5_GPIO_PIN;
		GPIO_Init(LED5_GPIO_PORT, &GPIO_InitStructure);
		
		/*选择要控制的GPIO引脚*/
		GPIO_InitStructure.GPIO_Pin = LED6_GPIO_PIN;
		GPIO_Init(LED6_GPIO_PORT, &GPIO_InitStructure);
		
		/*选择要控制的GPIO引脚*/
		GPIO_InitStructure.GPIO_Pin = LED7_GPIO_PIN;
		GPIO_Init(LED7_GPIO_PORT, &GPIO_InitStructure);
		
		/*选择要控制的GPIO引脚*/
		GPIO_InitStructure.GPIO_Pin = LED8_GPIO_PIN;
		GPIO_Init(LED8_GPIO_PORT, &GPIO_InitStructure);
		
		/*选择要控制的GPIO引脚*/
		GPIO_InitStructure.GPIO_Pin = LED9_GPIO_PIN;
		GPIO_Init(LED9_GPIO_PORT, &GPIO_InitStructure);
		
		/*选择要控制的GPIO引脚*/
		GPIO_InitStructure.GPIO_Pin = LED10_GPIO_PIN;
		GPIO_Init(LED10_GPIO_PORT, &GPIO_InitStructure);
		
		/*选择要控制的GPIO引脚*/
		GPIO_InitStructure.GPIO_Pin = LED11_GPIO_PIN;
		GPIO_Init(LED11_GPIO_PORT, &GPIO_InitStructure);
		
		/*选择要控制的GPIO引脚*/
		GPIO_InitStructure.GPIO_Pin = LED12_GPIO_PIN;
		GPIO_Init(LED12_GPIO_PORT, &GPIO_InitStructure);
		
				/*选择要控制的GPIO引脚*/
		GPIO_InitStructure.GPIO_Pin = LED13_GPIO_PIN;
		GPIO_Init(LED13_GPIO_PORT, &GPIO_InitStructure);
	
	
	
		/* 关闭所有led灯	*/
		GPIO_ResetBits(LED0_GPIO_PORT, LED0_GPIO_PIN);
		GPIO_ResetBits(LED1_GPIO_PORT, LED1_GPIO_PIN);
		GPIO_ResetBits(LED2_GPIO_PORT, LED2_GPIO_PIN);	 
		GPIO_ResetBits(LED3_GPIO_PORT, LED3_GPIO_PIN);
		GPIO_ResetBits(LED4_GPIO_PORT, LED1_GPIO_PIN);
		GPIO_ResetBits(LED5_GPIO_PORT, LED5_GPIO_PIN);
		GPIO_ResetBits(LED6_GPIO_PORT, LED6_GPIO_PIN);	 
		GPIO_ResetBits(LED7_GPIO_PORT, LED7_GPIO_PIN);
		GPIO_ResetBits(LED8_GPIO_PORT, LED8_GPIO_PIN);
		GPIO_ResetBits(LED9_GPIO_PORT, LED9_GPIO_PIN);
		GPIO_ResetBits(LED10_GPIO_PORT, LED10_GPIO_PIN);	
		GPIO_SetBits(LED11_GPIO_PORT, LED11_GPIO_PIN);
		GPIO_SetBits(LED12_GPIO_PORT, LED12_GPIO_PIN);
		GPIO_SetBits(LED13_GPIO_PORT, LED13_GPIO_PIN);
		
}


/*********************************************END OF FILE**********************/
