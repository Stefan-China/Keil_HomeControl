#ifndef __USART3_H
#define __USART3_H	 
#include "stm32f10x.h"
#include <stdio.h> 
// 串口3-USART3
#define  DEBUG_USART3                   USART3
#define  DEBUG_USART3_CLK                RCC_APB1Periph_USART3
#define  DEBUG_USART3_APBxClkCmd         RCC_APB1PeriphClockCmd
#define  DEBUG_USART3_BAUDRATE           115200

// USART GPIO 引脚宏定义
#define  DEBUG_USART3_GPIO_CLK           (RCC_APB2Periph_GPIOB)
#define  DEBUG_USART3_GPIO_APBxClkCmd    RCC_APB2PeriphClockCmd
    
#define  DEBUG_USART3_TX_GPIO_PORT         GPIOB   
#define  DEBUG_USART3_TX_GPIO_PIN          GPIO_Pin_10
#define  DEBUG_USART3_RX_GPIO_PORT       GPIOB
#define  DEBUG_USART3_RX_GPIO_PIN        GPIO_Pin_11

#define  DEBUG_USART3_IRQ                USART3_IRQn
#define  DEBUG_USART3_IRQHandler         USART3_IRQHandler


void USART3_Config(void);
void Usart3_SendByte( USART_TypeDef * pUSARTx, uint8_t ch);
void Usart3_SendString( USART_TypeDef * pUSARTx, char *str);
void Usart3_SendHalfWord( USART_TypeDef * pUSARTx, uint16_t ch);

#endif













