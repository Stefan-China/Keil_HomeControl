/**
  ******************************************************************************
  * @file    bsp_led.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   ledӦ�ú����ӿ�
  ******************************************************************************
  * @attention
  *
  * ʵ��ƽ̨:���� F103-ָ���� STM32 ������ 
  * ��̳    :http://www.firebbs.cn
  * �Ա�    :https://fire-stm32.taobao.com
  *
  ******************************************************************************
  */
  
#include "./led/bsp_led.h"   

 /**
  * @brief  ��ʼ������LED��IO
  * @param  ��
  * @retval ��
  */
void GPIO_Config(void)
{		
		/*����һ��GPIO_InitTypeDef���͵Ľṹ��*/
		GPIO_InitTypeDef GPIO_InitStructure;

		/*����LED��ص�GPIO����ʱ��*/
		RCC_APB2PeriphClockCmd( LED0_GPIO_CLK | LED1_GPIO_CLK | LED2_GPIO_CLK | LED3_GPIO_CLK  |\
	 										  		LED4_GPIO_CLK | LED5_GPIO_CLK | LED6_GPIO_CLK | LED7_GPIO_CLK  |\
													  LED8_GPIO_CLK | LED9_GPIO_CLK | LED10_GPIO_CLK| LED11_GPIO_CLK  |\
														LED12_GPIO_CLK |LED13_GPIO_CLK, ENABLE);
		/*ѡ��Ҫ���Ƶ�GPIO����*/
		GPIO_InitStructure.GPIO_Pin = LED0_GPIO_PIN;	

		/*��������ģʽΪͨ���������*/
		GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;   

		/*������������Ϊ50MHz */   
		GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; 

		/*���ÿ⺯������ʼ��GPIO*/
		GPIO_Init(LED0_GPIO_PORT, &GPIO_InitStructure);	
			
		/*ѡ��Ҫ���Ƶ�GPIO����*/
		GPIO_InitStructure.GPIO_Pin = LED1_GPIO_PIN;
		GPIO_Init(LED1_GPIO_PORT, &GPIO_InitStructure);
		
		/*ѡ��Ҫ���Ƶ�GPIO����*/
		GPIO_InitStructure.GPIO_Pin = LED2_GPIO_PIN;
		GPIO_Init(LED2_GPIO_PORT, &GPIO_InitStructure);
		
		/*ѡ��Ҫ���Ƶ�GPIO����*/
		GPIO_InitStructure.GPIO_Pin = LED3_GPIO_PIN;
		GPIO_Init(LED3_GPIO_PORT, &GPIO_InitStructure);
		
		/*ѡ��Ҫ���Ƶ�GPIO����*/
		GPIO_InitStructure.GPIO_Pin = LED4_GPIO_PIN;
		GPIO_Init(LED4_GPIO_PORT, &GPIO_InitStructure);
		
		/*ѡ��Ҫ���Ƶ�GPIO����*/
		GPIO_InitStructure.GPIO_Pin = LED5_GPIO_PIN;
		GPIO_Init(LED5_GPIO_PORT, &GPIO_InitStructure);
		
		/*ѡ��Ҫ���Ƶ�GPIO����*/
		GPIO_InitStructure.GPIO_Pin = LED6_GPIO_PIN;
		GPIO_Init(LED6_GPIO_PORT, &GPIO_InitStructure);
		
		/*ѡ��Ҫ���Ƶ�GPIO����*/
		GPIO_InitStructure.GPIO_Pin = LED7_GPIO_PIN;
		GPIO_Init(LED7_GPIO_PORT, &GPIO_InitStructure);
		
		/*ѡ��Ҫ���Ƶ�GPIO����*/
		GPIO_InitStructure.GPIO_Pin = LED8_GPIO_PIN;
		GPIO_Init(LED8_GPIO_PORT, &GPIO_InitStructure);
		
		/*ѡ��Ҫ���Ƶ�GPIO����*/
		GPIO_InitStructure.GPIO_Pin = LED9_GPIO_PIN;
		GPIO_Init(LED9_GPIO_PORT, &GPIO_InitStructure);
		
		/*ѡ��Ҫ���Ƶ�GPIO����*/
		GPIO_InitStructure.GPIO_Pin = LED10_GPIO_PIN;
		GPIO_Init(LED10_GPIO_PORT, &GPIO_InitStructure);
		
		/*ѡ��Ҫ���Ƶ�GPIO����*/
		GPIO_InitStructure.GPIO_Pin = LED11_GPIO_PIN;
		GPIO_Init(LED11_GPIO_PORT, &GPIO_InitStructure);
		
		/*ѡ��Ҫ���Ƶ�GPIO����*/
		GPIO_InitStructure.GPIO_Pin = LED12_GPIO_PIN;
		GPIO_Init(LED12_GPIO_PORT, &GPIO_InitStructure);
		
				/*ѡ��Ҫ���Ƶ�GPIO����*/
		GPIO_InitStructure.GPIO_Pin = LED13_GPIO_PIN;
		GPIO_Init(LED13_GPIO_PORT, &GPIO_InitStructure);
	
	
	
		/* �ر�����led��	*/
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
