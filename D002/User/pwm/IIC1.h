
#ifndef __IIC1_H__
#define __IIC1_H__

#include "stm32f10x.h"
#include "pca9685.h"

/*端口设置*/
#define IIC_SCL         PBout(6)       //SCLK  时钟   
#define IIC_SDA         PBout(7)       //SDA   写数据  
#define READ_SDA        PBin(7)        //SDA   读数据

void I2C1_Init(void);
void I2C1_Write_Byte(u8 address,u8 data);
u8 I2C1_Read_Data(u8 read_addr);
u8 BCD2HEX(u8 val);
u16 B_BCD(u8 val);


#endif
