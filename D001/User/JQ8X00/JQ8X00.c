#include "JQ8X00.h"
#include "usart4.h"
#include <string.h>

/**************************���ڿ���************************************/

/************************************************************************
������������ϲ�������
��ڲ����� 	*DAT���ַ���ָ��,Len�ַ�������
�� �� ֵ�� none
����˵���� ����Ҫ�������ļ���������������Ϊ�βμ���
**************************************************************************/
void  JQ8x00_ZuHeBoFang(uint8_t *DATA,uint8_t Len)
{
	u16 CRC_data=0,i = 3;
	uint8_t Buffer[ZH_MAX] ={0xaa,0x1b};
	Buffer[2] = Len*2;			//���㳤��
	CRC_data = CRC_data + 0xaa + 0x1b + Buffer[2];
	while(Len--)
	{
		Buffer[i] = *DATA/10+0x30;			//ȡ��ʮλ
		CRC_data = CRC_data + Buffer[i];
		i++;
		Buffer[i] = *DATA%10+0x30;			//ȡ����λ
		CRC_data = CRC_data + Buffer[i];
		i++;
		DATA++;
	}
	Buffer[i] = CRC_data;
	i++;
	JQ8x00_UART(Buffer,i);
}

/************************************************************************
������������ʼ��-ָ������-���ݳ���-У���
��ڲ����� 	MODE��ģʽ
�� �� ֵ�� none
����˵���� �������ݴ���
**************************************************************************/
void  JQ8x00_Command(UartCommand Command)
{
	uint8_t Buffer[4] ={0xaa};

    Buffer[1] = Command;            //ָ������			
    Buffer[2] = 0x00;           //���ݳ���
    Buffer[3] = Buffer[0] +  Buffer[1] +  Buffer[2];            //У���

	JQ8x00_UART(Buffer,4);
}

/************************************************************************
������������ʼ��-ָ������-���ݳ���-����-У���
��ڲ����� 	*DAT���ַ���ָ��,Len�ַ�������
�� �� ֵ�� none
����˵���� 
**************************************************************************/
void  JQ8x00_Command_Data(UartCommandData Command,uint8_t DATA)
{
	uint8_t Buffer[6] ={0xaa};
    uint8_t DataLen = 0;
    Buffer[1] = Command;       //ָ������
    if((Command != AppointTrack) && (Command != SetCycleCount) && (Command != SelectTrackNoPlay) && (Command != AppointTimeBack) && (Command != AppointTimeFast))        //ֻ��һ������ָ��    
    {
        Buffer[2] = 1;			//���ݳ���
        Buffer[3] = DATA;       //����
        Buffer[4] = Buffer[0] +  Buffer[1] +  Buffer[2] + Buffer[3];  //У���
        DataLen = 5;
    }
    else                                                         //����������ָ�� 
    {
        Buffer[2] = 2;			//���ݳ���
        Buffer[3] = DATA/256;       //����
        Buffer[4] = DATA%256;       //����
        Buffer[5] = Buffer[0] +  Buffer[1] +  Buffer[2] + Buffer[3] + Buffer[4];  
        DataLen = 6;
    }
    
	JQ8x00_UART(Buffer,DataLen);
}

/************************************************************************
������������������·���µĵ���Ƶ�ļ�
��ڲ�����JQ8X00_Symbol:ϵͳ�̷���*DATA:��Ҫ���ŵ���Ƶ�ļ�·��
�� �� ֵ�� none
����˵��������˵���� �� ��/���/С���ֻ�.mp3,���԰����¸�ʽ
        /���* /С��*???,�����*������ǰ������Ϊ�������ļ��С���*Ϊͨ���
        ע���ʽ����һ��Ŀ¼����ǰҪ��*����/����1* /����2* /00002*???
        JQ_8x00_RandomPathPlay(JQ8X00_FLASH,"���* /С��")
        ����FLASH��Ŀ¼���ļ���Ϊ00001.mp3����Ƶ����JQ_8x00_RandomPathPlay(JQ8X00_FLASH,"/00001");
**************************************************************************/
void JQ8x00_RandomPathPlay(JQ8X00_Symbol symbol,char *DATA)
{
    uint8_t Buffer[52] ={0xaa,0x08};
    uint8_t i,j;
    Buffer[2] = 1 + strlen(DATA) + 4;       //����,1Ϊ�̷���4Ϊ*������
    Buffer[3] = symbol;        //�̷�
    i = 4;
    while(*DATA)
    {
       Buffer[i++] =  *DATA;
        DATA++;
    }
    Buffer[i++] = '*';
    Buffer[i++] = '?';
    Buffer[i++] = '?';
    Buffer[i++] = '?';
    for(j=0;j<i;j++)
    {
        Buffer[i] = Buffer[i] + Buffer[j];      //����У���
    }
    i++;
    JQ8x00_UART(Buffer,i);
}
