/**
  ******************************************************************************
  * @file    main.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   串口中断接收测试
  ******************************************************************************
  * @attention
  *
  * 实验平台:秉火 F103-指南者 STM32 开发板 
  * 论坛    :http://www.firebbs.cn
  * 淘宝    :https://fire-stm32.taobao.com
  *
  ******************************************************************************
  */ 
 
 
#include "main.h"

extern const unsigned char BMP1[];
extern const unsigned char BMP2[];

uint16_t  LigthSwitch_flag=0 ,TVSwitch_flag=0 ,AirSwitch_flag=0 ,WaterSwitch_flag=0 ,DoorSwitch_flag=0 ,LivingSwitch_flag=0 ,WindowSwitch_flag=0 ,FamilySwitch_flag=0 ,SOSSwitch_flag=0 ,DoctorSwitch_flag=0 ,CanteenSwitch_flag=0 ,WorkSwitch_flag=0;

/**
  * @brief  主函数
  * @param  无
  * @retval 无
  */
int main(void)
{	
	//初始化始终
	SysTick_Init();
	
	//串口1初始化，调试
	USART_Config();
	
	//串口5初始化，环境监测
	//USART5_Config();	
	
	//控制引脚初始化
	GPIO_Config();
	//PMW初始化
	//PCA_MG9XX_Init(50,0);
	
	//串口4初始化，语音播报
	USART4_Config();	
	Delay_ms(500);              //等待模块稳定
  JQ8x00_Command_Data(SetVolume,10);         //设置音量
	
  //串口2初始化，WIFI连接
	Usart2_Init(115200);     
	TIM4_Init(500,7200);            //TIM4初始化，定时时间 500*7200*1000/72000000 = 50ms

	WiFi_ResetIO_Init();            //初始化WiFi的复位IO
	AliIoT_Parameter_Init();	    //初始化连接阿里云IoT平台MQTT服务器的参数	
	
	USART3_Config();
//	
	//OLED初始化
	i2c_GPIO_Config();
	OLED_Init();
	i2c_2_GPIO_Config();
	OLED_Init_2();
//	
	OLED_DrawBMP(0,0,128,8,(unsigned char *)BMP1);//测试BMP位图显示
	OLED_DrawBMP_2(0,0,128,8,(unsigned char *)BMP2);//测试BMP位图显示
	Delay_ms(1500);
	OLED_Fill(0x00);//全屏灭 
	OLED_Fill_2(0x00);//全屏灭 
	OLED_ShowCN(112,0,9);  //电池
	OLED_ShowCN(18,0,10);  //蓝牙
	
	OLED_ShowCN_2(112,0,9);  //电池
	OLED_ShowCN_2(18,0,10);  //蓝牙
//	/* 初始化无线 */
//	SPI_NRF_Init();
	 
  while(1)
	{	
		
		Schedule();
		 
		/*--------------------------------------------------------------------*/
		/*   Connect_flag=1同服务器建立了连接,我们可以发布数据和接收推送了    */
		/*--------------------------------------------------------------------*/
		if(Connect_flag==1)
			{     
				/*-------------------------------------------------------------*/
			/*                     处理发送缓冲区数据                      */
			/*-------------------------------------------------------------*/
				if(MQTT_TxDataOutPtr != MQTT_TxDataInPtr){                //if成立的话，说明发送缓冲区有数据了
				//3种情况可进入if
				//第1种：0x10 连接报文
				//第2种：0x82 订阅报文，且ConnectPack_flag置位，表示连接报文成功
				//第3种：SubcribePack_flag置位，说明连接和订阅均成功，其他报文可发
				if((MQTT_TxDataOutPtr[2]==0x10)||((MQTT_TxDataOutPtr[2]==0x82)&&(ConnectPack_flag==1))||(SubcribePack_flag==1)){    
					printf("发送数据:0x%x\r\n",MQTT_TxDataOutPtr[2]);  //串口提示信息
					MQTT_TxData(MQTT_TxDataOutPtr);                       //发送数据
					MQTT_TxDataOutPtr += TBUFF_UNIT;                      //指针下移
					if(MQTT_TxDataOutPtr==MQTT_TxDataEndPtr)              //如果指针到缓冲区尾部了
						MQTT_TxDataOutPtr = MQTT_TxDataBuf[0];            //指针归位到缓冲区开头
				} 				
			}//处理发送缓冲区数据的else if分支结尾
			
				/*-------------------------------------------------------------*/
				/*                     处理接收缓冲区数据                      */
				/*-------------------------------------------------------------*/
		
				if(MQTT_RxDataOutPtr != MQTT_RxDataInPtr) 												//if成立的话，说明接收缓冲区有数据了					
					{  									
						printf("接收到数据:");
					/*                    处理CONNACK报文                  */
					/*-----------------------------------------------------*/				
					//if判断，如果第一个字节是0x20，表示收到的是CONNACK报文
					//接着我们要判断第4个字节，看看CONNECT报文是否成功
					if(MQTT_RxDataOutPtr[2]==0x20){             			
							switch(MQTT_RxDataOutPtr[5]){					
							case 0x00 : printf("CONNECT报文成功\r\n");                            //串口输出信息	
											ConnectPack_flag = 1;                                        //CONNECT报文成功，订阅报文可发
										break;                                                       //跳出分支case 0x00                                              
							case 0x01 : printf("连接已拒绝，不支持的协议版本，准备重启\r\n");     //串口输出信息
										Connect_flag = 0;                                            //Connect_flag置零，重启连接
										break;                                                       //跳出分支case 0x01   
							case 0x02 : printf("连接已拒绝，不合格的客户端标识符，准备重启\r\n"); //串口输出信息
										Connect_flag = 0;                                            //Connect_flag置零，重启连接
										break;                                                       //跳出分支case 0x02 
							case 0x03 : printf("连接已拒绝，服务端不可用，准备重启\r\n");         //串口输出信息
										Connect_flag = 0;                                            //Connect_flag置零，重启连接
										break;                                                       //跳出分支case 0x03
							case 0x04 : printf("连接已拒绝，无效的用户名或密码，准备重启\r\n");   //串口输出信息
										Connect_flag = 0;                                            //Connect_flag置零，重启连接						
										break;                                                       //跳出分支case 0x04
							case 0x05 : printf("连接已拒绝，未授权，准备重启\r\n");               //串口输出信息
										Connect_flag = 0;                                            //Connect_flag置零，重启连接						
										break;                                                       //跳出分支case 0x05 		
							default   : printf("连接已拒绝，未知状态，准备重启\r\n");             //串口输出信息 
										Connect_flag = 0;                                            //Connect_flag置零，重启连接					
												break;                                                       //跳出分支case default 								
							}				
						}			
					//if判断，第一个字节是0x90，表示收到的是SUBACK报文
					//接着我们要判断订阅回复，看看是不是成功
					else if(MQTT_RxDataOutPtr[2]==0x90){ 
							switch(MQTT_RxDataOutPtr[6]){					
							case 0x00 :
							case 0x01 : printf("订阅成功\r\n");            //串口输出信息
												SubcribePack_flag = 1;                //SubcribePack_flag置1，表示订阅报文成功，其他报文可发送
												Ping_flag = 0;                        //Ping_flag清零
												TIM3_ENABLE_30S();                    //启动30s的PING定时器
												TIM2_ENABLE_10S();                    //启动30s的上传数据的定时器		 
												TempHumi_State();							
										break;                                //跳出分支                                             
							default   : printf("订阅失败，准备重启\r\n");  //串口输出信息 
										Connect_flag = 0;                     //Connect_flag置零，重启连接
										break;                                //跳出分支 								
						}					
					}
					//if判断，第一个字节是0xD0，表示收到的是PINGRESP报文
					else if(MQTT_RxDataOutPtr[2]==0xD0){ 
						printf("PING报文回复\r\n"); 		  //串口输出信息 
						if(Ping_flag==1){                     //如果Ping_flag=1，表示第一次发送
							 Ping_flag = 0;    				  //要清除Ping_flag标志
						}else if(Ping_flag>1){ 				  //如果Ping_flag>1，表示是多次发送了，而且是2s间隔的快速发送
							Ping_flag = 0;     				  //要清除Ping_flag标志
							TIM3_ENABLE_30S(); 				  //PING定时器重回30s的时间
						}				
					}	
					//if判断，如果第一个字节是0x30，表示收到的是服务器发来的推送数据
					//我们要提取控制命令
					else if((MQTT_RxDataOutPtr[2]==0x30)){ 
						printf("服务器等级0推送\r\n"); 		   //串口输出信息 
						MQTT_DealPushdata_Qs0(MQTT_RxDataOutPtr);  //处理等级0推送数据
					}				
									
					MQTT_RxDataOutPtr +=RBUFF_UNIT;                     //指针下移
					if(MQTT_RxDataOutPtr==MQTT_RxDataEndPtr)            //如果指针到缓冲区尾部了
						MQTT_RxDataOutPtr = MQTT_RxDataBuf[0];          //指针归位到缓冲区开头                        
				}//处理接收缓冲区数据的else if分支结尾
				
				/*-------------------------------------------------------------*/
				/*                     处理命令缓冲区数据                      */
				/*-------------------------------------------------------------*/
				if(MQTT_CMDOutPtr != MQTT_CMDInPtr){                             //if成立的话，说明命令缓冲区有数据了			       
							
					printf("命令:%s\r\n",&MQTT_CMDOutPtr[2]);  
					if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"LigthSwitch\":1}")){	       //如果搜索到"params":{"PowerSwitch":1}说明服务器下发打开开关1	
						LED9_ON;       LigthSwitch_flag=1;                     //ok                                 //打开LED1
					}else if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"LigthSwitch\":0}")){   //如果搜索到"params":{"PowerSwitch":0}说明服务器下发关闭开关1
						LED9_OFF;      LigthSwitch_flag=0;                                                         //关闭LED1
					}
					
					if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"TVSwitch\":1}")){	       //如果搜索到"params":{"PowerSwitch":1}说明服务器下发打开开关1	
						LED4_ON;       TVSwitch_flag=1;                //ok                                     //打开LED1
					}else if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"TVSwitch\":0}")){   //如果搜索到"params":{"PowerSwitch":0}说明服务器下发关闭开关1
						LED4_OFF;      TVSwitch_flag=0;                                                         //关闭LED1
					}
					
					if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"AirSwitch\":1}")){	       //如果搜索到"params":{"PowerSwitch":1}说明服务器下发打开开关1	
						LED3_ON;       AirSwitch_flag=1;             //ok                                       //打开LED1
					}else if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"AirSwitch\":0}")){   //如果搜索到"params":{"PowerSwitch":0}说明服务器下发关闭开关1
						LED3_OFF;      AirSwitch_flag=0;                                                     //关闭LED1
					}
					//电源开关
					if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"WaterSwitch\":1}")){	       //如果搜索到"params":{"PowerSwitch":1}说明服务器下发打开总开关
						LED2_ON;       WaterSwitch_flag=1;            //ok                                            //打开LED1
					}else if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"WaterSwitch\":0}")){   //如果搜索到"params":{"PowerSwitch":0}说明服务器下发关闭总开关
						LED2_OFF;      WaterSwitch_flag=0;                                                           //关闭LED1
					}
					
					if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"DoorSwitch\":1}")){	       //如果搜索到"params":{"PowerSwitch":1}说明服务器下发打开开关1	
						LED1_ON;       DoorSwitch_flag=1;       //ok                                                      //打开LED1
					}else if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"DoorSwitch\":0}")){   //如果搜索到"params":{"PowerSwitch":0}说明服务器下发关闭开关1
						LED1_OFF;      DoorSwitch_flag=0;                                                            //关闭LED1
					}
					
					if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"LivingSwitch\":1}")){	       //如果搜索到"params":{"PowerSwitch":1}说明服务器下发打开开关1	
						LED8_ON;       LivingSwitch_flag=1;          //ok                                                 //打开LED1
					}else if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"LivingSwitch\":0}")){   //如果搜索到"params":{"PowerSwitch":0}说明服务器下发关闭开关1
						LED8_OFF;      LivingSwitch_flag=0;                                                          //关闭LED1
					}
					
					if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"WindowSwitch\":1}")){	       //如果搜索到"params":{"PowerSwitch":1}说明服务器下发打开开关1	
						LED0_ON;      WindowSwitch_flag=1;            //ok                                        //打开LED1
					}else if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"WindowSwitch\":0}")){   //如果搜索到"params":{"PowerSwitch":0}说明服务器下发关闭开关1
						LED0_OFF;     WindowSwitch_flag=0;                                                        //关闭LED1
					}
					
					
					if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"FamilySwitch\":1}")){	       //如果搜索到"params":{"PowerSwitch":1}说明服务器下发打开开关1	
						 LED9_ON;     FamilySwitch_flag=1;        vioce_flag =  5;                                           //打开LED1
					}else if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"FamilySwitch\":0}")){   //如果搜索到"params":{"PowerSwitch":0}说明服务器下发关闭开关1
						 LED9_OFF;    FamilySwitch_flag=0;        vioce_flag =  0;                                               //关闭LED1
					}
					
					if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"SOSSwitch\":1}")){	       //如果搜索到"params":{"PowerSwitch":1}说明服务器下发打开开关1	
						LED8_ON;LED9_ON;   SOSSwitch_flag=1;               vioce_flag = 6  ;                                //打开LED1
					}else if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"SOSSwitch\":0}")){   //如果搜索到"params":{"PowerSwitch":0}说明服务器下发关闭开关1
						LED8_OFF;LED9_OFF; SOSSwitch_flag=0;                vioce_flag = 0;                                  //关闭LED1
					}
					
					if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"DoctorSwitch\":1}")){	       //如果搜索到"params":{"PowerSwitch":1}说明服务器下发打开开关1	
						 LED5_ON;    DoctorSwitch_flag=1;       vioce_flag =  2;                                         //打开LED1
					}else if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"DoctorSwitch\":0}")){   //如果搜索到"params":{"PowerSwitch":0}说明服务器下发关闭开关1
						 LED5_OFF;   DoctorSwitch_flag=0;         vioce_flag =  0;                                           //关闭LED1
					}
					
					if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"CanteenSwitch\":1}")){	       //如果搜索到"params":{"PowerSwitch":1}说明服务器下发打开开关1	
						LED7_ON;    CanteenSwitch_flag=1;        vioce_flag =  3;          //ok                                    //打开LED1
					}else if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"CanteenSwitch\":0}")){   //如果搜索到"params":{"PowerSwitch":0}说明服务器下发关闭开关1
						LED7_OFF;   CanteenSwitch_flag=0;        vioce_flag =  0;                                             //关闭LED1
					}
	
					if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"WorkSwitch\":1}")){	       //如果搜索到"params":{"PowerSwitch":1}说明服务器下发打开开关1	
					 LED6_ON;       WorkSwitch_flag=1;           vioce_flag =  4;  
					}else if(strstr((char *)MQTT_CMDOutPtr+2,"\"params\":{\"WorkSwitch\":0}")){   //如果搜索到"params":{"PowerSwitch":0}说明服务器下发关闭开关1
					 LED6_OFF;      WorkSwitch_flag=0;           vioce_flag =  0;                                                  //关闭LED1
					}
					
					
					
					
					MQTT_CMDOutPtr += CBUFF_UNIT;                             	 //指针下移
					if(MQTT_CMDOutPtr==MQTT_CMDEndPtr)           	             //如果指针到缓冲区尾部了
						MQTT_CMDOutPtr = MQTT_CMDBuf[0];          	             //指针归位到缓冲区开头			
					
					Command_State();
					Command1_State();
				}//处理命令缓冲区数据的else if分支结尾	
		}//Connect_flag=1的if分支的结尾
		
		/*--------------------------------------------------------------------*/
		/*      Connect_flag=0同服务器断开了连接,我们要重启连接服务器         */
		/*--------------------------------------------------------------------*/
		else
			{ 
				printf("需要连接服务器\r\n");                 //串口输出信息
				TIM_Cmd(TIM4,DISABLE);                           //关闭TIM4 
				TIM_Cmd(TIM3,DISABLE);                           //关闭TIM3  
				WiFi_RxCounter=0;                                //WiFi接收数据量变量清零                        
				memset(WiFi_RX_BUF,0,WiFi_RXBUFF_SIZE);          //清空WiFi接收缓冲区 
				if(WiFi_Connect_IoTServer()==0){   			     //如果WiFi连接云服务器函数返回0，表示正确，进入if
					printf("建立TCP连接成功\r\n");            //串口输出信息
					Connect_flag = 1;                            //Connect_flag置1，表示连接成功	
					WiFi_RxCounter=0;                            //WiFi接收数据量变量清零                        
					memset(WiFi_RX_BUF,0,WiFi_RXBUFF_SIZE);      //清空WiFi接收缓冲区 
					MQTT_Buff_Init();                            //初始化发送缓冲区                    
			}				
		}
	}
		
	
}
/*********************************************END OF FILE**********************/
