#include "schedule.h"

float temperature,humidity;        //����һ�������������¶�ֵ    

u8 status =1;

int vioce_flag=0;

char Path_Buffer1[] = {"/����1*/����2*/001��ʿ"};
char Path_Buffer2[] = {"/����1*/����2*/002ҽ��"};
char Path_Buffer3[] = {"/����1*/����2*/003�ò�"};
char Path_Buffer4[] = {"/����1*/����2*/004����"};
char Path_Buffer5[] = {"/����1*/����2*/005����"};
char Path_Buffer6[] = {"/����1*/����2*/006����"};
char Path_Buffer7[] = {"/����1*/����2*/007����"};


//u32 time =0;
//u32 time_heart=0;
//dataPoint_t currentDataPoint;
//u8 status;	//�����жϽ���/����״̬

//uint8_t data_ucTemp = 0;
//// �ֲ����������ڱ���ת�������ĵ�ѹֵ 	 
//  
int NRF_Flag = 1,NRF_SEND_FLAG=0,i;
//char temperature[10],humidity[10],CO2[10],HCHO[10],TVOC[10],PM2_5[10],PM_10[10];
//	
u8 txbuf[4]={4,1,1,1};	 //���ͻ���
u8 rxbuf[4];			 //���ջ���	 //���ջ���=1
//volatile uint32_t TIME_FLAG=0  ;
//int32_t Change_Time = 5,Door= 0 ,Window = 0 ,Light= 0 ,AirFan = 0 ;

//unsigned int sec = 0, min = 0, hour = 0, day = 1, week = 0, mon = 1, year = 2020;	//�ֱ����룬�֣�ʱ���죬���ڣ���
//unsigned char year_flag;	//�ж������־
//char sec_1[4],min_1[4],hour_1[4],day_1[4],week_1[4],mon_1[4],year_1[4];
//extern uint8_t ucTemp;
//extern int FLAG;
//extern uint8_t Sos_flag;
//extern uint8_t SOS;
//u8 wifi_sta =0;
//uint8_t get_time_flag=0;
//extern uint8_t time_deadline;//�ֻ�����ʱ�䵽1.
////init aerial detection variable
uint16_t HCHOdata =20000,CO2data=20000,TVOCdata =20000,PM25data = 20000,PM10data =20000,Tdata_zhen=20000,Tdata_xiao=20000,HUMdata_zhen =20000,HUMdata_xiao =20000;
//uint16_t	timeuart;
/***********************************************************************
�������ƣ�Schedule
�������ã��û��������
����������
�� �� ֵ��
�������ߣ������
************************************************************************/
void Schedule(void)
{	

//	WIFI_TASK();	//wifi��������			
//	TIME_TASK();    //��ʱ������
//	Control_select(); //��������
	Voice_TASK();//������������
	//NRF_TASK();		//���ߴ�������
//	Data_Processing();		//���ݴ�������
//	Display();		//��ʾ����
//	
//	OLED_Value_display(); 
//	
//�汾����������û��	
//	ADC_Task();     //��ѹ�ɼ�����
//	PWM_TASK();		//PWM��������
}

///***********************************************************************
//�������ƣ�WIFI_TASK
//�������ã�WIFI����
//����������
//�� �� ֵ��
//�������ߣ������
//************************************************************************/
//void WIFI_TASK(void)
//{
//		userHandle();//�û�ʱ�����
//		gizwitsHandle((dataPoint_t *)&currentDataPoint);//Э�鴦��
//		if(WIFI_First_Flag==1)
//		{
//			
//			printf("WIFI����AirLink����ģʽ\r\n");
//			WIFI_First_Flag=0;
//			gizwitsSetMode(WIFI_AIRLINK_MODE);//Air-linkģʽ����
//		}	
//		//wifiδ����ÿ�ν�������
//		if(wifi_sta==0)
//		{
//		
//			
//		}
//		else //�Ѿ�����
//		{
//				if(get_time_flag==0)
//				{
//					gizwitsGetNTP();  //��ȡ����ʱ��
//					get_time_flag=1;
//				}
//			
//		}
//}
/***********************************************************************
�������ƣ�NRF_TASK
�������ã���������
����������
�� �� ֵ��
�������ߣ������
************************************************************************/
void NRF_TASK(void)
{
	if(NRF_Flag == 0)  OLED_ShowCN(0,0,0);
	else OLED_ShowCN(0,0,5);
	NRF_send_selsct();
	
  NRF_TX_Mode();
  /*��ʼ��������*/	
	status = NRF_Tx_Dat(txbuf);	

		
}
///***********************************************************************
//�������ƣ�Data_Processing���ݴ���
//�������ã��û�������
//����������
//�� �� ֵ��
//�������ߣ������
//************************************************************************/
//void Data_Processing(void)
//{

//	sprintf(sec_1, "%d", sec); 
//	sprintf(min_1, "%d", min); 
//	sprintf(hour_1, "%d", hour); 
//	sprintf(day_1, "%d", day); 
//	sprintf(week_1, "%d", week); 
//	sprintf(mon_1, "%d", mon); 
//	sprintf(year_1, "%d", year); 
//	
//	sprintf(CO2, "%d", CO2data); 
//	sprintf(HCHO, "%d", HCHOdata); 
//	sprintf(TVOC, "%d", TVOCdata); 
//	sprintf(PM2_5, "%d", PM25data); 
//	sprintf(PM_10, "%d", PM10data); 
//	sprintf(temperature, "%d", Tdata_zhen); 
//	sprintf(humidity, "%d", HUMdata_zhen); 
//			
//}
///***********************************************************************
//�������ƣ�Display
//�������ã�OLED չʾ
//����������
//�� �� ֵ��
//�������ߣ������
//************************************************************************/
//void Display(void)
//{	
//	OLED_ShowStr(50,0,(unsigned char*)"Ward",2);
//	OLED_ShowCN(112,0,9);  //���
//	OLED_ShowCN(18,0,10);  //����
//	if (wifi_sta==1)       //wifi
//	{	OLED_ShowCN(90,0,11);
//		
//	}
//	else OLED_ShowStr(90,0,(unsigned char*)"  ",2);
//	
//	
//	OLED_ShowStr(0,6,(unsigned char*)"Temperature =     C",1);
//	OLED_ShowStr(85,6,(unsigned char*)temperature,1);
//	OLED_ShowStr(0,7,(unsigned char*)"Humidity    =   %RH",1);
//	OLED_ShowStr(85,7,(unsigned char*)humidity,1);
//	

//	OLED_ShowStr(0,2,(unsigned char*)year_1,2); 
//	OLED_ShowStr(32,2,(unsigned char*)":",2);
//	OLED_ShowStr(40,2,(unsigned char*)"  ",2);
//	OLED_ShowStr(40,2,(unsigned char*)mon_1,2);
//	OLED_ShowStr(56,2,(unsigned char*)":",2);
//	OLED_ShowStr(64,2,(unsigned char*)"  ",2);
//	OLED_ShowStr(64,2,(unsigned char*)day_1,2);
//	OLED_ShowStr(80,2,(unsigned char*)"week:",2);
//	OLED_ShowStr(120,2,(unsigned char*)" ",2);
//	OLED_ShowStr(120,2,(unsigned char*)week_1,2);
//	OLED_ShowStr(30,4,(unsigned char*)"  ",2);
//	OLED_ShowStr(30,4,(unsigned char*)hour_1,2);
//	OLED_ShowStr(46,4,(unsigned char*)":",2);
//	OLED_ShowStr(54,4,(unsigned char*)"  ",2);
//	OLED_ShowStr(54,4,(unsigned char*)min_1,2);
//	OLED_ShowStr(70,4,(unsigned char*)":",2);
//	OLED_ShowStr(78,4,(unsigned char*)"  ",2);
//	OLED_ShowStr(78,4,(unsigned char*)sec_1,2);	
//}

/***********************************************************************
�������ƣ�PWM_TASK
�������ã�С�Ƶ��������� 
����������
�� �� ֵ��
�������ߣ������
************************************************************************/
void Voice_TASK(void)
{		
	switch(vioce_flag)
	{
		case 1:JQ8x00_RandomPathPlay(JQ8X00_FLASH,Path_Buffer1); break;
		case 2:JQ8x00_RandomPathPlay(JQ8X00_FLASH,Path_Buffer2); break;
		case 3:JQ8x00_RandomPathPlay(JQ8X00_FLASH,Path_Buffer3); break;
		case 4:JQ8x00_RandomPathPlay(JQ8X00_FLASH,Path_Buffer4); break;
		case 5:JQ8x00_RandomPathPlay(JQ8X00_FLASH,Path_Buffer5); break;
		case 6:JQ8x00_RandomPathPlay(JQ8X00_FLASH,Path_Buffer6); break;
		case 100:JQ8x00_RandomPathPlay(JQ8X00_FLASH,Path_Buffer7); break;
		
	}
	vioce_flag=0;
	
	
}

///***********************************************************************
//�������ƣ�ADC_Task
//�������ã�ADC��ѹ��ȡ
//����������
//�� �� ֵ��
//�������ߣ������
//************************************************************************/
////void ADC_Task(void)
////{
////	
////	ADC_ConvertedValueLocal =(float) ADC_ConvertedValue/4096*5; // ��ȡת����ADֵ
////	if(ADC_ConvertedValueLocal>3.0)	OLED_ShowCN(112,0,9);  //���
////	else if(ADC_ConvertedValueLocal>=2.9) OLED_ShowCN(112,0,8); 
////	else if(ADC_ConvertedValueLocal>=2.8) OLED_ShowCN(112,0,7); 
////	else if(ADC_ConvertedValueLocal>=2.5) OLED_ShowCN(112,0,6); 
////	
////}

///*******************************************************************
//*�������ƣ�Control_select
//*���ߣ������
//*�������ܣ������յ������ݽ���
//*���ʱ�䣺2019.06.21
//********************************************************************/
//void Control_select(void)
//{
//	
//	 JQ8x00_RandomPathPlay(JQ8X00_FLASH,Path_Buffer);  
	
//}
/*******************************************************************
*�������ƣ�NRF_send_selsct
*���ߣ������
*�������ܣ����߷������ݸ�ֵ
*���ʱ�䣺2019.06.21
********************************************************************/
void NRF_send_selsct(void)
{
	switch(NRF_SEND_FLAG)
	{
		case 0:  txbuf[0] = 4;break;
		case 1:  txbuf[0] = 0;txbuf[1] = 0;break;
		case 2:  txbuf[0] = 0;txbuf[1] = 1;break;
		case 3:  txbuf[0] = 0;txbuf[1] = 2;break;
		case 4:  txbuf[0] = 0;txbuf[1] = 3;break;
		case 5:  txbuf[0] = 0;txbuf[1] = 4;break;
		case 6:  txbuf[0] = 0;txbuf[1] = 5;break;

	}

	//NRF_SEND_FLAG=0;
}
/*******************************************************************
*�������ƣ�SOS_send_CALL
*���ߣ������
*�������ܣ��������������
*���ʱ�䣺2019.06.21
********************************************************************/
void SOS_send_CALL(uint8_t num)
{
//	Usart4_SendString( DEBUG_USART4,"AT\r\n");
//	Delay_ms(800);
//	Usart4_SendString( DEBUG_USART4,"AT+CMGF=1\r\n");
//	Delay_ms(800);
//	Usart4_SendString( DEBUG_USART4,"AT+CSMP=17,167,0,25\r\n");
//	Delay_ms(800);
//	Usart4_SendString( DEBUG_USART4,"AT+CSCS=\"UCS2\"\r\n");
//	Delay_ms(800);
//	switch(num)
//	{
//		case(1):
//			Usart4_SendString( DEBUG_USART4,"AT+CMGS=\"00310033003400320037003500320037003200380037\"\r\n");
//			Delay_ms(800);	
//			Usart4_SendString( DEBUG_USART4,"60A8597DFF0C60A85728534E5E0875C5623F76845BB65C5E6B6359044E8E7D276025547C53EBFF0C8BF75C3D5FEB5230533B9662621680547CFB533B96624EBA5458FF01\r\n");
//			Delay_ms(800);	
//			USART_SendData(DEBUG_USART4,0x1A);
//			Delay_ms(1500);
//			Delay_ms(1500);
//			Delay_ms(1500);
//			Delay_ms(1500);
//			Usart4_SendString(DEBUG_USART4,"ATD13427527287;\r\n");break;
//		case(2):
//			Usart4_SendString( DEBUG_USART4,"AT+CMGS=\"00310035003600360037003000390036003800390035\"\r\n");
//			Delay_ms(800);	
//			Usart4_SendString( DEBUG_USART4,"60A8597DFF0C60A85728534E5E0875C5623F76845BB65C5E6B6359044E8E7D276025547C53EBFF0C8BF75C3D5FEB5230533B9662621680547CFB533B96624EBA5458FF01\r\n");
//			Delay_ms(800);	
//			USART_SendData(DEBUG_USART4,0x1A);
//			Delay_ms(1500);
//			Delay_ms(1500);
//			Delay_ms(1500);
//			Delay_ms(1500);
//			Usart4_SendString(DEBUG_USART4,"ATD15667096895;\r\n");break;
//		case(3):
//			Usart4_SendString( DEBUG_USART4,"AT+CMGS=\"00310039003100320034003300330031003300380033\"\r\n");
//			Delay_ms(800);	
//			Usart4_SendString( DEBUG_USART4,"60A8597DFF0C60A85728534E5E0875C5623F76845BB65C5E6B6359044E8E7D276025547C53EBFF0C8BF75C3D5FEB5230533B9662621680547CFB533B96624EBA5458FF01\r\n");
//			Delay_ms(800);	
//			USART_SendData(DEBUG_USART4,0x1A);
//			Delay_ms(1500);
//			Delay_ms(1500);
//			Delay_ms(1500);
//			Delay_ms(1500);
//			Usart4_SendString(DEBUG_USART4,"ATD19124331383;\r\n");break;
//	}

}
/*******************************************************************
*�������ƣ�Command_State| Command1_State  
*���ߣ������
*�������ܣ�WIFI�������������ش�
*���ʱ�䣺2019.06.21
*��ע�� ����ֿ�  һ���Ƿ��Ͳ��ܳ���300  ���в�֪��ʲôԭ�� ���ܺϲ� �����ٲ鿴
********************************************************************/
void Command_State(void)
{
	char temp[TBUFF_UNIT], temp1[TBUFF_UNIT];                        //����һ����ʱ������
	sprintf(temp,"{\"method\":\"thing.event.property.post\",\"id\":\"1390197656\",\"params\":{\"LigthSwitch\":%d,\"TVSwitch\":%d,\"AirSwitch\":%d,\"WaterSwitch\":%d,\"DoorSwitch\":%d,\"LivingSwitch\":%d,\"WindowSwitch\":%d,},\"version\":\"1.0.0\"}", \
		                                                                                          LigthSwitch_flag,  TVSwitch_flag,  AirSwitch_flag,  WaterSwitch_flag,  DoorSwitch_flag,  LivingSwitch_flag,  WindowSwitch_flag);  //���LED1�Ǹߵ�ƽ��˵����Ϩ��״̬����Ҫ�ظ��ر�״̬��������
	MQTT_PublishQs0(P_TOPIC_NAME,temp,strlen(temp));   //������ݣ�������������	
	
	 sprintf(temp1,"{\"method\":\"thing.event.property.post\",\"id\":\"1390197656\",\"params\":{\"DoctorSwitch\":%d,\"CanteenSwitch\":%d,\"FamilySwitch\":%d,\"SOSSwitch\":%d,\"WorkSwitch\":%d,},\"version\":\"1.0.0\"}", DoctorSwitch_flag,  CanteenSwitch_flag,  FamilySwitch_flag,  SOSSwitch_flag,  WorkSwitch_flag);  //���LED1�Ǹߵ�ƽ��˵����Ϩ��״̬����Ҫ�ظ��ر�״̬��������
	
	MQTT_PublishQs0(P_TOPIC_NAME,temp1,strlen(temp1));   //������ݣ�������������	
	printf("����״̬\n\r");    
	
                                                        
}

void Command1_State(void)
{
//	char  temp1[TBUFF_UNIT]; ;                        //����һ����ʱ������
//  
//	
//	sprintf(temp1,"{\"method\":\"thing.event.property.post\",\"id\":\"203302326\",\"params\":{\"DoctorSwitch\":%d,\"WaterSwitch\":%d,\"FamilySwitch\":%d��\"SOSSwitch\":%d��\"WorkSwitch\":%d},\"version\":\"1.0.0\"}",  \
//	                                                                                            DoctorSwitch_flag,  WaterSwitch_flag,  FamilySwitch_flag,   SOSSwitch_flag,   WorkSwitch_flag);  //���LED1�Ǹߵ�ƽ��˵����Ϩ��״̬����Ҫ�ظ��ر�״̬��������
//	MQTT_PublishQs0(P_TOPIC_NAME,temp1,strlen(temp1));   //������ݣ�������������	
//	
//	printf("����״̬\n\r");                                                        
}

/*******************************************************************
*�������ƣ�TempHumi_State
*���ߣ������
*�������ܣ�WIFI������⴦����ش�
*���ʱ�䣺2019.06.21
********************************************************************/
void TempHumi_State(void)
{
//	char temp[TBUFF_UNIT]; 
//         
//	double HCHO,TVOC,CO2;
//	int pm2_5,pm10;
//	
//	CO2 = (double)((RxBufUart1_Set[2]*256) + RxBufUart1_Set[3]);
//	HCHO = (double)((RxBufUart1_Set[4]*256) + RxBufUart1_Set[5]);
//	TVOC = (double)((RxBufUart1_Set[6]*256) + RxBufUart1_Set[7]);
//	pm2_5 = (RxBufUart1_Set[8]*256) + RxBufUart1_Set[9];
//	pm10 = (RxBufUart1_Set[10]*256) + RxBufUart1_Set[11];
//	temperature = (float)RxBufUart1_Set[12]+(RxBufUart1_Set[13]/100.0);
//	humidity =(float)RxBufUart1_Set[14]+(RxBufUart1_Set[15]/100.0);
//	printf("�¶ȣ�%f  ʪ�ȣ�%f ��ȩ�� %f  tvoc�� %f CO2�� %f  pm2.5 %d  pm10  %d\r\n",temperature,humidity,HCHO,TVOC,CO2,pm2_5,pm10);  //���������Ϣ
//	
//	sprintf(temp,"{\"method\":\"thing.event.property.post\",\"id\":\"203302326\",\"params\":{\"EnvHumidity\":%f,\"IndoorTemperature\":%f,\"HCHO\":%f,\"TVOC\":%f,\"CO2\":%f,\"pm2.5\":%d,\"PM10\":%d},\"version\":\"1.0.0\"}",humidity, temperature, HCHO, TVOC, CO2, pm2_5, pm10);  //�����ظ�ʪ���¶�����
//	MQTT_PublishQs0(P_TOPIC_NAME,temp,strlen(temp));   //������ݣ�������������	
}


