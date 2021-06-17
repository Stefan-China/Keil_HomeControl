#include "pca9685.h"


void pca_setfreq(float freq)//����PWMƵ��
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


/*num:���PWM�������0~15��on:PWM��������ֵ0~4096,off:PWM�½�����ֵ0~4096
һ��PWM���ڷֳ�4096�ݣ���0��ʼ+1�������Ƶ�onʱ����Ϊ�ߵ�ƽ������������offʱ
����Ϊ�͵�ƽ��ֱ������4096���¿�ʼ�����Ե�on������0ʱ������ʱ,��on����0ʱ��
off/4096��ֵ����PWM��ռ�ձȡ�*/
void pca_setpwm(u8 num, u32 on, u32 off)
{
		I2C1_Write_Byte(LED0_ON_L+4*num,on);
		I2C1_Write_Byte(LED0_ON_H+4*num,on>>8);
		I2C1_Write_Byte(LED0_OFF_L+4*num,off);
		I2C1_Write_Byte(LED0_OFF_H+4*num,off>>8);
}


/*
	�������ã���ʼ�����������
	������1.PWMƵ��
		  2.��ʼ������Ƕ�
*/
void PCA_MG9XX_Init(float hz,u8 angle)
{
	u32 off=0;
	I2C1_Init();
	I2C1_Write_Byte(pca_mode1,0x0);
	pca_setfreq(hz);//����PWMƵ��
	off=(u32)(110+angle*1.6);
	pca_setpwm(0,0,off);
	Delay_ms(500);
}



/*
	�������ã����ƶ��ת����
	������1.����˿ڣ���ѡ0~15��
			2.��ʼ�Ƕȣ���ѡ0~180��
			3.�����Ƕȣ���ѡ0~180��
		  4.�ٶȣ�������� 0 ������ֵ���� 1 ʱ�ٶ���죬��ֵԽ���ٶ�ԽС��
	ע�����1������ٶ�С��10������ٶȴ�
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

