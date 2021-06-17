#include "pca9685.h"


void pca_setfreq(float freq)//设置PWM频率
{
		u8 prescale,oldmode,newmode;
		double prescaleval;
		freq *= 0.92; 
		prescaleval = 25000000;
		prescaleval /= 4096;
		prescaleval /= freq;
		prescaleval -= 1;
		prescale =floor(prescaleval + 0.5f);

		oldmode = I2C1_Read_Data(pca_mode1);
	
		newmode = (oldmode&0x7F) | 0x10; // sleep
	
		I2C1_Write_Byte(pca_mode1, newmode); // go to sleep
	
		I2C1_Write_Byte(pca_pre, prescale); // set the prescaler
	
		I2C1_Write_Byte(pca_mode1, oldmode);
		Delay_ms(2);
	
		I2C1_Write_Byte(pca_mode1, oldmode | 0xa1); 
}


/*num:舵机PWM输出引脚0~15，on:PWM上升计数值0~4096,off:PWM下降计数值0~4096
一个PWM周期分成4096份，由0开始+1计数，计到on时跳变为高电平，继续计数到off时
跳变为低电平，直到计满4096重新开始。所以当on不等于0时可作延时,当on等于0时，
off/4096的值就是PWM的占空比。*/
void pca_setpwm(u8 num, u32 on, u32 off)
{
		I2C1_Write_Byte(LED0_ON_L+4*num,on);
		I2C1_Write_Byte(LED0_ON_H+4*num,on>>8);
		I2C1_Write_Byte(LED0_OFF_L+4*num,off);
		I2C1_Write_Byte(LED0_OFF_H+4*num,off>>8);
}


/*
	函数作用：初始化舵机驱动板
	参数：1.PWM频率
		  2.初始化舵机角度
*/
void PCA_MG9XX_Init(float hz,u8 angle)
{
	u32 off=0;
	I2C1_Init();
	I2C1_Write_Byte(pca_mode1,0x0);
	pca_setfreq(hz);//设置PWM频率
	off=(u32)(110+angle*1.6);
	pca_setpwm(0,0,off);
	Delay_ms(500);
}



/*
	函数作用：控制舵机转动；
	参数：1.输出端口，可选0~15；
			2.起始角度，可选0~180；
			3.结束角度，可选0~180；
		  4.速度，可填大于 0 的任意值，填 1 时速度最快，数值越大，速度越小；
	注意事项：1的最大速度小，10的最大速度大。
*/
void PCA_MG9XX(u8 num,u8 start_angle,u8 end_angle,u8 speed)
{
	int i,j;
	u32 off=0;

	switch(speed)
	{
		case'1':j=100;break;
		case'2':j=130;break;
		case'3':j=170;break;
	  case'4':j=300;break;
    case'5':j=400;break;
    case'6':j=500;break;
		case'7':j=500;break;
		case'8':j=500;break;
    case'9':j=500;break;
		default:j=600;
	}
	
	if(end_angle>start_angle)
	{
		for(i=start_angle;i<=end_angle;i=i+speed)
		{
			off=(u32)(110+i*1.6);
			pca_setpwm(num,0,off);
		}
		Delay_ms(j);
	}
	if(end_angle<start_angle)
	{
		for(i=start_angle;i>=end_angle;i=i-speed)
		{
			off=(u32)(110+i*1.6);
			pca_setpwm(num,0,off);
		}
		Delay_ms(j);
	}
}

