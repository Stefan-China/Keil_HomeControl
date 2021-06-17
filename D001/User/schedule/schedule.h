#ifndef __SCHEDULE_H
#define	__SCHEDULE_H


#include "main.h"

extern float temperature,humidity;        //定义一个变量，保存温度值    
//extern int32_t Change_Time ,Door ,Window,Light,AirFan  ;
//extern volatile uint32_t TIME_FLAG  ;

//extern unsigned int sec, min , hour , day , week, mon, year;	//分别定义秒，分，时，天，星期，月
extern  u8	RxCountUart1_Set,RxBufUart1_Set[32];
//	
//extern  unsigned char year_flag;	//判断闰年标志
void Schedule(void);
//void DHT11_Task(void);
//void WIFI_TASK(void);
void NRF_TASK(void);
//void Data_Processing(void);
//void Display(void);
void Voice_TASK(void);
//void userHandle(void);
//void ADC_Task(void);
//void TIME_TASK(void);
//void cal_week(void);
//void Control_select(void);
void NRF_send_selsct(void);
void SOS_send_CALL(uint8_t num);
void Command_State(void);
void Command1_State(void);
void TempHumi_State(void);

extern int NRF_SEND_FLAG;
extern int vioce_flag;
#endif /* __SCHEDULE_H */
