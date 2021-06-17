#ifndef __JQ8x00_H
#define __JQ8x00_H
#include "stm32f10x.h"


#define ZH_MAX	50		//��ϲ����������

//��ʱ�����ض���
#define JQ8x00_ms(ms)    delay_ms(ms)         //JQ8x00��ʱ�������壬�û����и���Ϊ�Լ�����ʱ����
#define JQ8x00_us(us)    delay_us(us)

//���ں����ض���
#define JQ8x00_UART(pointer,len)  UART4_SendCode(pointer,len)        //pointerΪָ�����ݴ��������׵�ַ��lenΪҪ�������ݸ���
/*************************IO�˿ں궨�� ����IO�˿����޸�����Ķ���*********************************/


//���߿���IO��ƽ���ã���������
#define JQ8x00_VPP_Clr()	 GPIO_ResetBits(JQ8x00_VPP_GPIO,JQ8x00_VPP_GPIO_Pin)
#define JQ8x00_VPP_Set()	 GPIO_SetBits(JQ8x00_VPP_GPIO,JQ8x00_VPP_GPIO_Pin)

typedef enum {
    OverallCycle                = 0X00,         /*ȫ��ѭ�� ��˳�򲥷�ȫ����Ŀ,�������ѭ������*/
    SingleCycle                 = 0x01,         /*����ѭ�� һֱѭ�����ŵ�ǰ��Ŀ*/
    SingleStop                  = 0x02,         /*����ֹͣ �����굱ǰ��Ŀһ��ֹͣ*/
    OverallRandom               = 0X03,         /*ȫ����� ��������̷�����Ŀ*/
    CatalogCycle                = 0X04,          /*Ŀ¼ѭ�� ��˳�򲥷ŵ�ǰ�ļ�������Ŀ,�������ѭ�����ţ�Ŀ¼��������Ŀ¼*/
    CatalogRandom               = 0x05,          /*Ŀ¼��� �ڵ�ǰĿ¼��������ţ�Ŀ¼��������Ŀ¼*/
    CatalogTurnPlay             = 0x06,         /*Ŀ¼˳�򲥷� ��˳�򲥷ŵ�ǰ�ļ�������Ŀ,�������ֹͣ��Ŀ¼��������Ŀ¼*/
    OverallTurnPlay             = 0x07,         /*ȫ��˳�򲥷� ��˳�򲥷�ȫ����Ŀ,�������ֹͣ*/ 
}LoopModeSelect;      //ѭ��ģʽѡ��

/**********************���ڿ���**************************/
typedef enum {
    CheckPlayState                  = 0x01,					/*��ѯ����״̬*/
    Play                            = 0x02,					/*����*/
    pause                           = 0x03,					/*��ͣ*/
    Stop                            = 0x04,					/*ֹͣ*/
	
    LastSong                        = 0x05,					/*��һ��*/
    NextSong                        = 0x06,					/*��һ��*/   
    CheckOnelineDisksign	        = 0x09,					/*��ѯ��ǰ�����̷�*/
    CheckCurrentDisksign	        = 0X0A,					/*��ѯ��ǰ�����̷�*/
    CheckTotalTrack                 = 0x0C,                 /*��ѯ����Ŀ*/
    CurrentTrack                    = 0x0D,                  /*��ǰ��Ŀ*/
    LastFloder                      = 0x0E,                  /*��һ���ļ���Ŀ¼*/
    NextFloder                      = 0x0F,                  /*��һ���ļ���Ŀ¼*/          
    EndPlay	                        = 0x10, 				/*��������*/
    CheckFloderFirstTrack           = 0x11,                 /*��ѯ�ļ�Ŀ¼����Ŀ*/
    CheckFloderAllTrack             = 0x12,                 /*��ѯ�ļ�Ŀ¼����Ŀ*/
    AddVolume                       = 0x14,                 /*������*/
    DecVolume                       = 0x15,                 /*������*/
    EndZHPlay                       = 0X1C,                 /*������ϲ���*/ 
    CheckSongShortName	            = 0x1E,					/*��ѯ�������ļ���*/
    EndLoop                         = 0x21,                 /*��������*/
    GetTotalSongTime                = 0x24,                 /*��ȡ��ǰ��Ŀ��ʱ��*/
    OpenPlayTime                    = 0x25,                 /*����ʱ�俪����*/                
    ClosePlayTime                   = 0x26,                 /*�رղ���ʱ�䷢��*/
}UartCommand;     //�����ݵ�ָ��,��ʼ��-ָ������-���ݳ���-У���

typedef enum {
    AppointTrack                    = 0x07,				    /*ָ����Ŀ����*/
    SetCycleCount                   = 0x19,             /*����ѭ������*/
    SetEQ                           = 0X1A,             /*EQ����*/
    SelectTrackNoPlay               = 0x1F,             /*ѡ��������*/
    GoToDisksign                    = 0X0B,             /*�л�ָ���̷�*/
    SetVolume                       = 0x13,              /*��������*/
    SetLoopMode                     = 0x18,              /*����ѭ��ģʽ*/
    SetChannel                      = 0x1D,               /*����ͨ��*/ 
    AppointTimeBack                 = 0x22,              /*ָ��ʱ�����*/
    AppointTimeFast                 = 0x23,               /*ָ��ʱ�����*/
}UartCommandData;       //����������ݵ�ָ��,��ʼ��-ָ������-���ݳ���-����1-...-У���

typedef enum {
    JQ8X00_USB                      = 0X00,                 /*UPANND*/
    JQ8X00_SD                       = 0x01,                 /*SD*/
    JQ8X00_FLASH                    = 0x02,                 /*FLASH*/
}JQ8X00_Symbol;       //ϵͳ�̷�


void JQ8x00_Command(UartCommand MODE);
void JQ8x00_Command_Data(UartCommandData MODE,u8 DATA);
void JQ8x00_ZuHeBoFang(u8 *DATA,u8 Len);
void JQ8x00_RandomPathPlay(JQ8X00_Symbol MODE,char *DATA);


void JQ8x00_Init(void);

#endif
