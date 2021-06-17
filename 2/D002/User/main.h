#ifndef __MAIN_H
#define	__MAIN_H



#include "stm32f10x.h"
#include "usart.h"
#include "usart2.h"        //������Ҫ��ͷ�ļ�
#include "usart4.h"
#include "usart5.h"
#include "mqtt.h"       //������Ҫ��ͷ�ļ�
#include "stm32f10x_it.h"
#include "bsp_SysTick.h"

#include "timer1.h"        //������Ҫ��ͷ�ļ�
#include "timer2.h"        //������Ҫ��ͷ�ļ�
#include "timer4.h"        //������Ҫ��ͷ�ļ�
#include "wifi.h"	       //������Ҫ��ͷ�ļ�
#include "timer3.h"        //������Ҫ��ͷ�ļ�
#include "./led/bsp_led.h" 

#include <stdlib.h>
#include  "pca9685.h"
#include  "iic1.h"
#include "schedule.h"

#include "OLED_I2C.h"
#include "bsp_i2c.h"
#include "OLED_I2C_2.h"
#include "bsp_i2c_2.h"

#include "bsp_spi_nrf.h"
#include "schedule.h"

#include "usart3.h"
#include "JQ8X00.h"
extern uint16_t  LigthSwitch_flag ,TVSwitch_flag ,AirSwitch_flag ,WaterSwitch_flag ,DoorSwitch_flag ,LivingSwitch_flag ,WindowSwitch_flag ,\
					FamilySwitch_flag ,SOSSwitch_flag ,DoctorSwitch_flag ,CanteenSwitch_flag, WorkSwitch_flag  ;

extern  u8	RxCountUart1_Set,RxBufUart1_Set[32];
extern  u8  Bci_flag;
#endif /* __MAIN_H */


