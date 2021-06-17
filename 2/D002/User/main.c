/**
  ******************************************************************************
  * @file    main.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   �����жϽ��ղ���
  ******************************************************************************
  * @attention
  *
  * ʵ��ƽ̨:���� F103-ָ���� STM32 ������ 
  * ��̳    :http://www.firebbs.cn
  * �Ա�    :https://fire-stm32.taobao.com
  *
  ******************************************************************************
  */ 
 
 
#include "main.h"

extern const unsigned char BMP1[];
extern const unsigned char BMP2[];

uint16_t  LigthSwitch_flag=0 ,TVSwitch_flag=0 ,AirSwitch_flag=0 ,WaterSwitch_flag=0 ,DoorSwitch_flag=0 ,LivingSwitch_flag=0 ,WindowSwitch_flag=0 ,FamilySwitch_flag=0 ,SOSSwitch_flag=0 ,DoctorSwitch_flag=0 ,CanteenSwitch_flag=0 ,WorkSwitch_flag=0;

/**
  * @brief  ������
  * @param  ��
  * @retval ��
  */
int main(void)
{	
	//��ʼ��ʼ��
	SysTick_Init();
	
	//����1��ʼ��������
	USART_Config();
	
	//����5��ʼ�����������
	//USART5_Config();	
	
	//�������ų�ʼ��
	GPIO_Config();
	//PMW��ʼ��
	//PCA_MG9XX_Init(50,0);
	
	//����4��ʼ������������
	USART4_Config();	
	Delay_ms(500);              //�ȴ�ģ���ȶ�
  JQ8x00_Command_Data(SetVolume,10);         //��������
	
  //����2��ʼ����WIFI����
	Usart2_Init(115200);     
	TIM4_Init(500,7200);            //TIM4��ʼ������ʱʱ�� 500*7200*1000/72000000 = 50ms

	WiFi_ResetIO_Init();            //��ʼ��WiFi�ĸ�λIO
	AliIoT_Parameter_Init();	    //��ʼ�����Ӱ�����IoTƽ̨MQTT�������Ĳ���	
	
	USART3_Config();
//	
	//OLED��ʼ��
	i2c_GPIO_Config();
	OLED_Init();
	i2c_2_GPIO_Config();
	OLED_Init_2();
//	
	OLED_DrawBMP(0,0,128,8,(unsigned char *)BMP1);//����BMPλͼ��ʾ
	OLED_DrawBMP_2(0,0,128,8,(unsigned char *)BMP2);//����BMPλͼ��ʾ
	Delay_ms(1500);
	OLED_Fill(0x00);//ȫ���� 
	OLED_Fill_2(0x00);//ȫ���� 
	OLED_ShowCN(112,0,9);  //���
	OLED_ShowCN(18,0,10);  //����
	
	OLED_ShowCN_2(112,0,9);  //���
	OLED_ShowCN_2(18,0,10);  //����
//	/* ��ʼ������ */
//	SPI_NRF_Init();
	 
  while(1)
	{	
		
		Schedule();
		 
		/*--------------------------------------------------------------------*/
		/*   Connect_flag=1ͬ����������������,���ǿ��Է������ݺͽ���������    */
		/*--------------------------------------------------------------------*/
		if(Connect_flag==1)
			{     
				/*-------------------------------------------------------------*/
			/*                     �����ͻ���������                      */
			/*-------------------------------------------------------------*/
				if(MQTT_TxDataOutPtr != MQTT_TxDataInPtr){                //if�����Ļ���˵�����ͻ�������������
				//3������ɽ���if
				//��1�֣�0x10 ���ӱ���
				//��2�֣�0x82 ���ı��ģ���ConnectPack_flag��λ����ʾ���ӱ��ĳɹ�
				//��3�֣�SubcribePack_flag��λ��˵�����ӺͶ��ľ��ɹ����������Ŀɷ�
				if((MQTT_TxDataOutPtr[2]==0x10)||((MQTT_TxDataOutPtr[2]==0x82)&&(ConnectPack_flag==1))||(SubcribePack_flag==1)){    
					printf("��������:0x%x\r\n",MQTT_TxDataOutPtr[2]);  //������ʾ��Ϣ
					MQTT_TxData(MQTT_TxDataOutPtr);                       //��������
					MQTT_TxDataOutPtr += TBUFF_UNIT;                      //ָ������
					if(MQTT_TxDataOutPtr==MQTT_TxDataEndPtr)              //���ָ�뵽������β����
						MQTT_TxDataOutPtr = MQTT_TxDataBuf[0];            //ָ���λ����������ͷ
				} 				
			}//�����ͻ��������ݵ�else if��֧��β
			
				/*-------------------------------------------------------------*/
				/*                     ������ջ���������                      */
				/*-------------------------------------------------------------*/
		
				if(MQTT_RxDataOutPtr != MQTT_RxDataInPtr) 												//if�����Ļ���˵�����ջ�������������					
					{  									
						printf("���յ�����:");
					/*                    ����CONNACK����                  */
					/*-----------------------------------------------------*/				
					//if�жϣ������һ���ֽ���0x20����ʾ�յ�����CONNACK����
					//��������Ҫ�жϵ�4���ֽڣ�����CONNECT�����Ƿ�ɹ�
					if(MQTT_RxDataOutPtr[2]==0x20){             			
							switch(MQTT_RxDataOutPtr[5]){					
							case 0x00 : printf("CONNECT���ĳɹ�\r\n");                            //���������Ϣ	
											ConnectPack_flag = 1;                                        //CONNECT���ĳɹ������ı��Ŀɷ�
										break;                                                       //������֧case 0x00                                              
							case 0x01 : printf("�����Ѿܾ�����֧�ֵ�Э��汾��׼������\r\n");     //���������Ϣ
										Connect_flag = 0;                                            //Connect_flag���㣬��������
										break;                                                       //������֧case 0x01   
							case 0x02 : printf("�����Ѿܾ������ϸ�Ŀͻ��˱�ʶ����׼������\r\n"); //���������Ϣ
										Connect_flag = 0;                                            //Connect_flag���㣬��������
										break;                                                       //������֧case 0x02 
							case 0x03 : printf("�����Ѿܾ�������˲����ã�׼������\r\n");         //���������Ϣ
										Connect_flag = 0;                                            //Connect_flag���㣬��������
										break;                                                       //������֧case 0x03
							case 0x04 : printf("�����Ѿܾ�����Ч���û��������룬׼������\r\n");   //���������Ϣ
										Connect_flag = 0;                                            //Connect_flag���㣬��������						
										break;                                                       //������֧case 0x04
							case 0x05 : printf("�����Ѿܾ���δ��Ȩ��׼������\r\n");               //���������Ϣ
										Connect_flag = 0;                                            //Connect_flag���㣬��������						
										break;                                                       //������֧case 0x05 		
							default   : printf("�����Ѿܾ���δ֪״̬��׼������\r\n");             //���������Ϣ 
										Connect_flag = 0;                                            //Connect_flag���㣬��������					
												break;                                                       //������֧case default 								
							}				
						}			
					//if�жϣ���һ���ֽ���0x90����ʾ�յ�����SUBACK����
					//��������Ҫ�ж϶��Ļظ��������ǲ��ǳɹ�
					else if(MQTT_RxDataOutPtr[2]==0x90){ 
							switch(MQTT_RxDataOutPtr[6]){					
							case 0x00 :
							case 0x01 : printf("���ĳɹ�\r\n");            //���������Ϣ
												SubcribePack_flag = 1;                //SubcribePack_flag��1����ʾ���ı��ĳɹ����������Ŀɷ���
												Ping_flag = 0;                        //Ping_flag����
												TIM3_ENABLE_30S();                    //����30s��PING��ʱ��
												TIM2_ENABLE_10S();                    //����30s���ϴ����ݵĶ�ʱ��		 
												TempHumi_State();							
										break;                                //������֧                                             
							default   : printf("����ʧ�ܣ�׼������\r\n");  //���������Ϣ 
										Connect_flag = 0;                     //Connect_flag���㣬��������
										break;                                //������֧ 								
						}					
					}
					//if�жϣ���һ���ֽ���0xD0����ʾ�յ�����PINGRESP����
					else if(MQTT_RxDataOutPtr[2]==0xD0){ 
						printf("PING���Ļظ�\r\n"); 		  //���������Ϣ 
						if(Ping_flag==1){                     //���Ping_flag=1����ʾ��һ�η���
							 Ping_flag = 0;    				  //Ҫ���Ping_flag��־
						}else if(Ping_flag>1){ 				  //���Ping_flag>1����ʾ�Ƕ�η����ˣ�������2s����Ŀ��ٷ���
							Ping_flag = 0;     				  //Ҫ���Ping_flag��־
							TIM3_ENABLE_30S(); 				  //PING��ʱ���ػ�30s��ʱ��
						}				
					}	
					//if�жϣ������һ���ֽ���0x30����ʾ�յ����Ƿ�������������������
					//����Ҫ��ȡ��������
					else if((MQTT_RxDataOutPtr[2]==0x30)){ 
						printf("�������ȼ�0����\r\n"); 		   //���������Ϣ 
						MQTT_DealPushdata_Qs0(MQTT_RxDataOutPtr);  //����ȼ�0��������
					}				
									
					MQTT_RxDataOutPtr +=RBUFF_UNIT;                     //ָ������
					if(MQTT_RxDataOutPtr==MQTT_RxDataEndPtr)            //���ָ�뵽������β����
						MQTT_RxDataOutPtr = MQTT_RxDataBuf[0];          //ָ���λ����������ͷ                        
				}//������ջ��������ݵ�else if��֧��β
				
				/*-------------------------------------------------------------*/
				/*                     ���������������                      */
				/*-------------------------------------------------------------*/
				if(MQTT_CMDOutPtr != MQTT_CMDInPtr){                             //if�����Ļ���˵�����������������			       
							
					printf("����:%s\r\n",&MQTT_CMDOutPtr[2]);  
					if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"LigthSwitch\":1}")){	       //���������"params":{"PowerSwitch":1}˵���������·��򿪿���1	
						LED9_ON;       LigthSwitch_flag=1;                     //ok                                 //��LED1
					}else if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"LigthSwitch\":0}")){   //���������"params":{"PowerSwitch":0}˵���������·��رտ���1
						LED9_OFF;      LigthSwitch_flag=0;                                                         //�ر�LED1
					}
					
					if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"TVSwitch\":1}")){	       //���������"params":{"PowerSwitch":1}˵���������·��򿪿���1	
						LED4_ON;       TVSwitch_flag=1;                //ok                                     //��LED1
					}else if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"TVSwitch\":0}")){   //���������"params":{"PowerSwitch":0}˵���������·��رտ���1
						LED4_OFF;      TVSwitch_flag=0;                                                         //�ر�LED1
					}
					
					if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"AirSwitch\":1}")){	       //���������"params":{"PowerSwitch":1}˵���������·��򿪿���1	
						LED3_ON;       AirSwitch_flag=1;             //ok                                       //��LED1
					}else if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"AirSwitch\":0}")){   //���������"params":{"PowerSwitch":0}˵���������·��رտ���1
						LED3_OFF;      AirSwitch_flag=0;                                                     //�ر�LED1
					}
					//��Դ����
					if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"WaterSwitch\":1}")){	       //���������"params":{"PowerSwitch":1}˵���������·����ܿ���
						LED2_ON;       WaterSwitch_flag=1;            //ok                                            //��LED1
					}else if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"WaterSwitch\":0}")){   //���������"params":{"PowerSwitch":0}˵���������·��ر��ܿ���
						LED2_OFF;      WaterSwitch_flag=0;                                                           //�ر�LED1
					}
					
					if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"DoorSwitch\":1}")){	       //���������"params":{"PowerSwitch":1}˵���������·��򿪿���1	
						LED1_ON;       DoorSwitch_flag=1;       //ok                                                      //��LED1
					}else if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"DoorSwitch\":0}")){   //���������"params":{"PowerSwitch":0}˵���������·��رտ���1
						LED1_OFF;      DoorSwitch_flag=0;                                                            //�ر�LED1
					}
					
					if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"LivingSwitch\":1}")){	       //���������"params":{"PowerSwitch":1}˵���������·��򿪿���1	
						LED8_ON;       LivingSwitch_flag=1;          //ok                                                 //��LED1
					}else if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"LivingSwitch\":0}")){   //���������"params":{"PowerSwitch":0}˵���������·��رտ���1
						LED8_OFF;      LivingSwitch_flag=0;                                                          //�ر�LED1
					}
					
					if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"WindowSwitch\":1}")){	       //���������"params":{"PowerSwitch":1}˵���������·��򿪿���1	
						LED0_ON;      WindowSwitch_flag=1;            //ok                                        //��LED1
					}else if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"WindowSwitch\":0}")){   //���������"params":{"PowerSwitch":0}˵���������·��رտ���1
						LED0_OFF;     WindowSwitch_flag=0;                                                        //�ر�LED1
					}
					
					
					if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"FamilySwitch\":1}")){	       //���������"params":{"PowerSwitch":1}˵���������·��򿪿���1	
						 LED9_ON;     FamilySwitch_flag=1;        vioce_flag =  5;                                           //��LED1
					}else if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"FamilySwitch\":0}")){   //���������"params":{"PowerSwitch":0}˵���������·��رտ���1
						 LED9_OFF;    FamilySwitch_flag=0;        vioce_flag =  0;                                               //�ر�LED1
					}
					
					if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"SOSSwitch\":1}")){	       //���������"params":{"PowerSwitch":1}˵���������·��򿪿���1	
						LED8_ON;LED9_ON;   SOSSwitch_flag=1;               vioce_flag = 6  ;                                //��LED1
					}else if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"SOSSwitch\":0}")){   //���������"params":{"PowerSwitch":0}˵���������·��رտ���1
						LED8_OFF;LED9_OFF; SOSSwitch_flag=0;                vioce_flag = 0;                                  //�ر�LED1
					}
					
					if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"DoctorSwitch\":1}")){	       //���������"params":{"PowerSwitch":1}˵���������·��򿪿���1	
						 LED5_ON;    DoctorSwitch_flag=1;       vioce_flag =  2;                                         //��LED1
					}else if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"DoctorSwitch\":0}")){   //���������"params":{"PowerSwitch":0}˵���������·��رտ���1
						 LED5_OFF;   DoctorSwitch_flag=0;         vioce_flag =  0;                                           //�ر�LED1
					}
					
					if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"CanteenSwitch\":1}")){	       //���������"params":{"PowerSwitch":1}˵���������·��򿪿���1	
						LED7_ON;    CanteenSwitch_flag=1;        vioce_flag =  3;          //ok                                    //��LED1
					}else if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"CanteenSwitch\":0}")){   //���������"params":{"PowerSwitch":0}˵���������·��رտ���1
						LED7_OFF;   CanteenSwitch_flag=0;        vioce_flag =  0;                                             //�ر�LED1
					}
	
					if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"WorkSwitch\":1}")){	       //���������"params":{"PowerSwitch":1}˵���������·��򿪿���1	
					 LED6_ON;       WorkSwitch_flag=1;           vioce_flag =  4;  
					}else if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"WorkSwitch\":0}")){   //���������"params":{"PowerSwitch":0}˵���������·��رտ���1
					 LED6_OFF;      WorkSwitch_flag=0;           vioce_flag =  0;                                                  //�ر�LED1
					}
					
					
					
					
					MQTT_CMDOutPtr += CBUFF_UNIT;                             	 //ָ������
					if(MQTT_CMDOutPtr==MQTT_CMDEndPtr)           	             //���ָ�뵽������β����
						MQTT_CMDOutPtr = MQTT_CMDBuf[0];          	             //ָ���λ����������ͷ			
					
					Command_State();
					Command1_State();
				}//��������������ݵ�else if��֧��β	
		}//Connect_flag=1��if��֧�Ľ�β
		
		/*--------------------------------------------------------------------*/
		/*      Connect_flag=0ͬ�������Ͽ�������,����Ҫ�������ӷ�����         */
		/*--------------------------------------------------------------------*/
		else
			{ 
				printf("��Ҫ���ӷ�����\r\n");                 //���������Ϣ
				TIM_Cmd(TIM4,DISABLE);                           //�ر�TIM4 
				TIM_Cmd(TIM3,DISABLE);                           //�ر�TIM3  
				WiFi_RxCounter=0;                                //WiFi������������������                        
				memset(WiFi_RX_BUF,0,WiFi_RXBUFF_SIZE);          //���WiFi���ջ����� 
				if(WiFi_Connect_IoTServer()==0){   			     //���WiFi�����Ʒ�������������0����ʾ��ȷ������if
					printf("����TCP���ӳɹ�\r\n");            //���������Ϣ
					Connect_flag = 1;                            //Connect_flag��1����ʾ���ӳɹ�	
					WiFi_RxCounter=0;                            //WiFi������������������                        
					memset(WiFi_RX_BUF,0,WiFi_RXBUFF_SIZE);      //���WiFi���ջ����� 
					MQTT_Buff_Init();                            //��ʼ�����ͻ�����                    
			}				
		}
	}
		
	
}
/*********************************************END OF FILE**********************/
