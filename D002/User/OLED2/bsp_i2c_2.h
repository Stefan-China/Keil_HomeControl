#ifndef _BSP_I2C_2_H
#define _BSP_I2C_2_H

#include "stm32f10x.h"
#include <inttypes.h>

/* 定义I2C总线连接的GPIO端口, 用户只需要修改下面4行代码即可任意改变SCL和SDA的引脚 */
#define GPIO_PORT_I2C_2	GPIOG			/* GPIO端口 */
#define RCC_I2C_PORT_2 	RCC_APB2Periph_GPIOG
/* GPIO端口时钟 */
#define I2C_2_SCL_PIN		GPIO_Pin_13		/* 连接到SCL时钟线的GPIO */
#define I2C_2_SDA_PIN		GPIO_Pin_14			/* 连接到SDA数据线的GPIO */




/* 定义读写SCL和SDA的宏，已增加代码的可移植性和可阅读性 */
	/* 这个分支选择直接寄存器操作实现IO读写 */
    /*　注意：如下写法，在IAR最高级别优化时，会被编译器错误优化 */
	#define I2C_2_SCL_1()  GPIO_PORT_I2C_2->BSRR = I2C_2_SCL_PIN				/* SCL = 1 */
	#define I2C_2_SCL_0()  GPIO_PORT_I2C_2->BRR = I2C_2_SCL_PIN				/* SCL = 0 */
	
	#define I2C_2_SDA_1()  GPIO_PORT_I2C_2->BSRR = I2C_2_SDA_PIN				/* SDA = 1 */
	#define I2C_2_SDA_0()  GPIO_PORT_I2C_2->BRR = I2C_2_SDA_PIN				/* SDA = 0 */
	
	#define I2C_2_SDA_READ()  ((GPIO_PORT_I2C_2->IDR & I2C_2_SDA_PIN) != 0)	/* 读SDA口线状态 */


#define I2C_WR	0		/* 写控制bit */
#define I2C_RD	1		/* 读控制bit */

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
