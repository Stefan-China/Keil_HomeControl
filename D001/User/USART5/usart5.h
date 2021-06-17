#ifndef __USART5_H
#define __USART5_H	 
#include "stm32f10x.h"
#include <stdio.h> 
// 串口5-UART5
#define  DEBUG_USART5                   UART5
#define  DEBUG_USART5_CLK                RCC_APB1Periph_UART5
#define  DEBUG_USART5_APBxClkCmd         RCC_APB1PeriphClockCmd
#define  DEBUG_USART5_BAUDRATE           9600

// USART GPIO 引脚宏定义
#define  DEBUG_USART5_GPIO_CLK           (RCC_APB2Periph_GPIOC|RCC_APB2Periph_GPIOD)
#define  DEBUG_USART5_GPIO_APBxClkCmd    RCC_APB2PeriphClockCmd
    
#define  DEBUG_USART5_TX_GPIO_PORT         GPIOC   
#define  DEBUG_USART5_TX_GPIO_PIN          GPIO_Pin_12
#define  DEBUG_USART5_RX_GPIO_PORT       GPIOD
#define  DEBUG_USART5_RX_GPIO_PIN        GPIO_Pin_2

#define  DEBUG_USART5_IRQ                UART5_IRQn
#define  DEBUG_USART5_IRQHandler         UART5_IRQHandler


void USART5_Config(void);
void Usart5_SendByte( USART_TypeDef * pUSARTx, uint8_t ch);
void Usart5_SendString( USART_TypeDef * pUSARTx, char *str);
void Usart5_SendHalfWord( USART_TypeDef * pUSARTx, uint16_t ch);
#endif













