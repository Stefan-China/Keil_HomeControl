#ifndef __PCA_H
#define __PCA_H	
#include	"stm32f10x.h"
#include  "iic1.h"
#include "bsp_SysTick.h"
#include	"math.h"

#define pca_adrr 0x80
#define pca_mode1 0x0
#define pca_pre 0xFE
#define LED0_ON_L 0x6
#define LED0_ON_H 0x7
#define LED0_OFF_L 0x8
#define LED0_OFF_H 0x9

void PCA_MG9XX_Init(float hz,u8 angle);
void PCA_MG9XX(u8 num,u8 start_angle,u8 end_angle,u8 speed);
void pca_setfreq(float freq);
void pca_setpwm(u8 num, u32 on, u32 off);

#endif
