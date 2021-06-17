#include "JQ8X00.h"
#include "usart4.h"
#include <string.h>

/**************************串口控制************************************/

/************************************************************************
功能描述：组合播报函数
入口参数： 	*DAT：字符串指针,Len字符串长度
返 回 值： none
其他说明： 将需要播报的文件名放入数组中作为形参即可
**************************************************************************/
void  JQ8x00_ZuHeBoFang(uint8_t *DATA,uint8_t Len)
{
	u16 CRC_data=0,i = 3;
	uint8_t Buffer[ZH_MAX] ={0xaa,0x1b};
	Buffer[2] = Len*2;			//计算长度
	CRC_data = CRC_data + 0xaa + 0x1b + Buffer[2];
	while(Len--)
	{
		Buffer[i] = *DATA/10+0x30;			//取出十位
		CRC_data = CRC_data + Buffer[i];
		i++;
		Buffer[i] = *DATA%10+0x30;			//取出个位
		CRC_data = CRC_data + Buffer[i];
		i++;
		DATA++;
	}
	Buffer[i] = CRC_data;
	i++;
	JQ8x00_UART(Buffer,i);
}

/************************************************************************
功能描述：起始码-指令类型-数据长度-校验和
入口参数： 	MODE：模式
返 回 值： none
其他说明： 无数数据传入
**************************************************************************/
void  JQ8x00_Command(UartCommand Command)
{
	uint8_t Buffer[4] ={0xaa};

    Buffer[1] = Command;            //指令类型			
    Buffer[2] = 0x00;           //数据长度
    Buffer[3] = Buffer[0] +  Buffer[1] +  Buffer[2];            //校验和

	JQ8x00_UART(Buffer,4);
}

/************************************************************************
功能描述：起始码-指令类型-数据长度-数据-校验和
入口参数： 	*DAT：字符串指针,Len字符串长度
返 回 值： none
其他说明： 
**************************************************************************/
void  JQ8x00_Command_Data(UartCommandData Command,uint8_t DATA)
{
	uint8_t Buffer[6] ={0xaa};
    uint8_t DataLen = 0;
    Buffer[1] = Command;       //指令类型
    if((Command != AppointTrack) && (Command != SetCycleCount) && (Command != SelectTrackNoPlay) && (Command != AppointTimeBack) && (Command != AppointTimeFast))        //只含一个数据指令    
    {
        Buffer[2] = 1;			//数据长度
        Buffer[3] = DATA;       //数据
        Buffer[4] = Buffer[0] +  Buffer[1] +  Buffer[2] + Buffer[3];  //校验和
        DataLen = 5;
    }
    else                                                         //含两个数据指令 
    {
        Buffer[2] = 2;			//数据长度
        Buffer[3] = DATA/256;       //数据
        Buffer[4] = DATA%256;       //数据
        Buffer[5] = Buffer[0] +  Buffer[1] +  Buffer[2] + Buffer[3] + Buffer[4];  
        DataLen = 6;
    }
    
	JQ8x00_UART(Buffer,DataLen);
}

/************************************************************************
功能描述：播放任意路径下的的音频文件
入口参数：JQ8X00_Symbol:系统盘符，*DATA:需要播放的音频文件路径
返 回 值： none
其他说明：播放说明例 如 ：/广告/小米手机.mp3,可以按如下格式
        /广告* /小米*???,“广告*”代表前两个字为“广告的文件夹”，*为通配符
        注意格式，下一个目录符号前要加*，如/测试1* /测试2* /00002*???
        JQ_8x00_RandomPathPlay(JQ8X00_FLASH,"广告* /小米")
        播放FLASH根目录下文件名为00001.mp3的音频，则传JQ_8x00_RandomPathPlay(JQ8X00_FLASH,"/00001");
**************************************************************************/
void JQ8x00_RandomPathPlay(JQ8X00_Symbol symbol,char *DATA)
{
    uint8_t Buffer[52] ={0xaa,0x08};
    uint8_t i,j;
    Buffer[2] = 1 + strlen(DATA) + 4;       //长度,1为盘符，4为*？？？
    Buffer[3] = symbol;        //盘符
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
        Buffer[i] = Buffer[i] + Buffer[j];      //计算校验合
    }
    i++;
    JQ8x00_UART(Buffer,i);
}
