#ifndef __USART4_H
#define __USART4_H	 
#include "stm32f10x.h"
#include <stdio.h> 
// 串口4-UART4
#define  DEBUG_USART4                   UART4
#define  DEBUG_USART4_CLK                RCC_APB1Periph_UART4
#define  DEBUG_USART4_APBxClkCmd         RCC_APB1PeriphClockCmd
#define  DEBUG_USART4_BAUDRATE           9600

// USART GPIO 引脚宏定义
#define  DEBUG_USART4_GPIO_CLK           (RCC_APB2Periph_GPIOC)
#define  DEBUG_USART4_GPIO_APBxClkCmd    RCC_APB2PeriphClockCmd
    
#define  DEBUG_USART4_TX_GPIO_PORT         GPIOC   
#define  DEBUG_USART4_TX_GPIO_PIN          GPIO_Pin_10
#define  DEBUG_USART4_RX_GPIO_PORT         GPIOC
#define  DEBUG_USART4_RX_GPIO_PIN          GPIO_Pin_11



void USART4_Config(void);
void Usart4_SendByte( USART_TypeDef * pUSARTx, uint8_t ch);
void Usart4_SendString( USART_TypeDef * pUSARTx, char *str);
void UART4_SendCode(u8 *DATA,u8 len);
#endif













