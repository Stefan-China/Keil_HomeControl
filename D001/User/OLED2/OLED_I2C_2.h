#ifndef __OLED_I2C_2_H
#define	__OLED_I2C_2_H

#include "stm32f10x.h"


#define OLED_ADDRESS	0x78 //通过调整0R电阻,屏可以0x78和0x7A两个地址 -- 默认0x78


void I2C_2_WriteByte(uint8_t addr,uint8_t data);
void WriteCmd_2(unsigned char I2C_Command);
void WriteDat_2(unsigned char I2C_Data);
void OLED_Init_2(void);
void OLED_SetPos_2(unsigned char x, unsigned char y);
void OLED_Fill_2(unsigned char fill_Data);
void OLED_CLS_2(void);
void OLED_ON_2(void);
void OLED_OFF_2(void);
void OLED_ShowStr_2(unsigned char x, unsigned char y, unsigned char ch[], unsigned char TextSize);
void OLED_ShowCN_2(unsigned char x, unsigned char y, unsigned char N);
void OLED_DrawBMP_2(unsigned char x0,unsigned char y0,unsigned char x1,unsigned char y1,unsigned char BMP_2[]);

#endif
