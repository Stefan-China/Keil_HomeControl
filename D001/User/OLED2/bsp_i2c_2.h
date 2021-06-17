#ifndef _BSP_I2C_2_H
#define _BSP_I2C_2_H

#include "stm32f10x.h"
#include <inttypes.h>

/* ����I2C�������ӵ�GPIO�˿�, �û�ֻ��Ҫ�޸�����4�д��뼴������ı�SCL��SDA������ */
#define GPIO_PORT_I2C_2	GPIOG			/* GPIO�˿� */
#define RCC_I2C_PORT_2 	RCC_APB2Periph_GPIOG
/* GPIO�˿�ʱ�� */
#define I2C_2_SCL_PIN		GPIO_Pin_13		/* ���ӵ�SCLʱ���ߵ�GPIO */
#define I2C_2_SDA_PIN		GPIO_Pin_14			/* ���ӵ�SDA�����ߵ�GPIO */




/* �����дSCL��SDA�ĺ꣬�����Ӵ���Ŀ���ֲ�ԺͿ��Ķ��� */
	/* �����֧ѡ��ֱ�ӼĴ�������ʵ��IO��д */
    /*��ע�⣺����д������IAR��߼����Ż�ʱ���ᱻ�����������Ż� */
	#define I2C_2_SCL_1()  GPIO_PORT_I2C_2->BSRR = I2C_2_SCL_PIN				/* SCL = 1 */
	#define I2C_2_SCL_0()  GPIO_PORT_I2C_2->BRR = I2C_2_SCL_PIN				/* SCL = 0 */
	
	#define I2C_2_SDA_1()  GPIO_PORT_I2C_2->BSRR = I2C_2_SDA_PIN				/* SDA = 1 */
	#define I2C_2_SDA_0()  GPIO_PORT_I2C_2->BRR = I2C_2_SDA_PIN				/* SDA = 0 */
	
	#define I2C_2_SDA_READ()  ((GPIO_PORT_I2C_2->IDR & I2C_2_SDA_PIN) != 0)	/* ��SDA����״̬ */


#define I2C_WR	0		/* д����bit */
#define I2C_RD	1		/* ������bit */

void i2c_2_Start(void);
void i2c_2_Stop(void);
void i2c_2_SendByte(uint8_t _ucByte);
uint8_t i2c_2_ReadByte(uint8_t ack);
uint8_t i2c_2_WaitAck(void);
void i2c_2_Ack(void);
void i2c_2_NAck(void);
uint8_t i2c_2_CheckDevice(uint8_t _Address);
void i2c_2_GPIO_Config(void);

#endif
