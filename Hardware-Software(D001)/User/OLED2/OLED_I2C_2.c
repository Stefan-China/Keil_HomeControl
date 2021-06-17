#include "OLED_I2C_2.h"
#include "codetab_2.h"
#include "bsp_SysTick.h"
#include "bsp_i2c_2.h"
 /**
  * @brief  I2C_2_WriteByte����OLED�Ĵ�����ַдһ��byte������
  * @param  addr���Ĵ�����ַ
	*					data��Ҫд�������
  * @retval ��
  */
void I2C_2_WriteByte(uint8_t addr,uint8_t data)
{
	i2c_2_Start();
	i2c_2_SendByte(OLED_ADDRESS);
	i2c_2_WaitAck();
	i2c_2_SendByte(addr);
	i2c_2_WaitAck();
	i2c_2_SendByte(data);
	i2c_2_WaitAck();
	i2c_2_Stop();
}


 /**
  * @brief  WriteCmd_2����OLEDд������
  * @param  I2C_Command���������
  * @retval ��
  */
void WriteCmd_2(unsigned char I2C_Command)//д����
{
	I2C_2_WriteByte(0x00, I2C_Command);
}


 /**
  * @brief  WriteDat_2����OLEDд������
  * @param  I2C_Data������
  * @retval ��
  */
void WriteDat_2(unsigned char I2C_Data)//д����
{
	I2C_2_WriteByte(0x40, I2C_Data);
}


 /**
  * @brief  OLED_Init_2����ʼ��OLED
  * @param  ��
  * @retval ��
  */
void OLED_Init_2(void)
{
	Delay_ms(100); //�������ʱ����Ҫ
	
	WriteCmd_2(0xAE); //display off
	WriteCmd_2(0x20);	//Set Memory Addressing Mode	
	WriteCmd_2(0x10);	//00,Horizontal Addressing Mode;01,Vertical Addressing Mode;10,Page Addressing Mode (RESET);11,Invalid
	WriteCmd_2(0xb0);	//Set Page Start Address for Page Addressing Mode,0-7
	WriteCmd_2(0xc8);	//Set COM Output Scan Direction
	WriteCmd_2(0x00); //---set low column address
	WriteCmd_2(0x10); //---set high column address
	WriteCmd_2(0x40); //--set start line address
	WriteCmd_2(0x81); //--set contrast control register
	WriteCmd_2(0xff); //���ȵ��� 0x00~0xff
	WriteCmd_2(0xa1); //--set segment re-map 0 to 127
	WriteCmd_2(0xa6); //--set normal display
	WriteCmd_2(0xa8); //--set multiplex ratio(1 to 64)
	WriteCmd_2(0x3F); //
	WriteCmd_2(0xa4); //0xa4,Output follows RAM content;0xa5,Output ignores RAM content
	WriteCmd_2(0xd3); //-set display offset
	WriteCmd_2(0x00); //-not offset
	WriteCmd_2(0xd5); //--set display clock divide ratio/oscillator frequency
	WriteCmd_2(0xf0); //--set divide ratio
	WriteCmd_2(0xd9); //--set pre-charge period
	WriteCmd_2(0x22); //
	WriteCmd_2(0xda); //--set com pins hardware configuration
	WriteCmd_2(0x12);
	WriteCmd_2(0xdb); //--set vcomh
	WriteCmd_2(0x20); //0x20,0.77xVcc
	WriteCmd_2(0x8d); //--set DC-DC enable
	WriteCmd_2(0x14); //
	WriteCmd_2(0xaf); //--turn on oled panel
}


 /**
  * @brief  OLED_SetPos_2�����ù��
  * @param  x,���xλ��
	*					y�����yλ��
  * @retval ��
  */
void OLED_SetPos_2(unsigned char x, unsigned char y) //������ʼ������
{ 
	WriteCmd_2(0xb0+y);
	WriteCmd_2(((x&0xf0)>>4)|0x10);
	WriteCmd_2((x&0x0f)|0x01);
}

 /**
  * @brief  OLED_Fill_2�����������Ļ
  * @param  fill_Data:Ҫ��������
	* @retval ��
  */
void OLED_Fill_2(unsigned char fill_Data)//ȫ�����
{
	unsigned char m,n;
	for(m=0;m<8;m++)
	{
		WriteCmd_2(0xb0+m);		//page0-page1
		WriteCmd_2(0x00);		//low column start address
		WriteCmd_2(0x10);		//high column start address
		for(n=0;n<128;n++)
			{
				WriteDat_2(fill_Data);
			}
	}
}

 /**
  * @brief  OLED_CLS_2������
  * @param  ��
	* @retval ��
  */
void OLED_CLS_2(void)//����
{
	OLED_Fill_2(0x00);
}


 /**
  * @brief  OLED_ON_2����OLED�������л���
  * @param  ��
	* @retval ��
  */
void OLED_ON_2(void)
{
	WriteCmd_2(0X8D);  //���õ�ɱ�
	WriteCmd_2(0X14);  //������ɱ�
	WriteCmd_2(0XAF);  //OLED����
}


 /**
  * @brief  OLED_OFF_2����OLED���� -- ����ģʽ��,OLED���Ĳ���10uA
  * @param  ��
	* @retval ��
  */
void OLED_OFF_2(void)
{
	WriteCmd_2(0X8D);  //���õ�ɱ�
	WriteCmd_2(0X10);  //�رյ�ɱ�
	WriteCmd_2(0XAE);  //OLED����
}


 /**
  * @brief  OLED_ShowStr_2����ʾcodetab.h�е�ASCII�ַ�,��6*8��8*16��ѡ��
  * @param  x,y : ��ʼ������(x:0~127, y:0~7);
	*					ch[] :- Ҫ��ʾ���ַ���; 
	*					TextSize : �ַ���С(1:6*8 ; 2:8*16)
	* @retval ��
  */
void OLED_ShowStr_2(unsigned char x, unsigned char y, unsigned char ch[], unsigned char TextSize)
{
	unsigned char c = 0,i = 0,j = 0;
	switch(TextSize)
	{
		case 1:
		{
			while(ch[j] != '\0')
			{
				c = ch[j] - 32;
				if(x > 126)
				{
					x = 0;
					y++;
				}
				OLED_SetPos_2(x,y);
				for(i=0;i<6;i++)
					WriteDat_2(F6x8_2[c][i]);
				x += 6;
				j++;
			}
		}break;
		case 2:
		{
			while(ch[j] != '\0')
			{
				c = ch[j] - 32;
				if(x > 120)
				{
					x = 0;
					y++;
				}
				OLED_SetPos_2(x,y);
				for(i=0;i<8;i++)
					WriteDat_2(F8X16_2[c*16+i]);
				OLED_SetPos_2(x,y+1);
				for(i=0;i<8;i++)
					WriteDat_2(F8X16_2[c*16+i+8]);
				x += 8;
				j++;
			}
		}break;
	}
}

 /**
  * @brief  OLED_ShowCN_2����ʾcodetab.h�еĺ���,16*16����
  * @param  x,y: ��ʼ������(x:0~127, y:0~7); 
	*					N:������codetab.h�е�����
	* @retval ��
  */
void OLED_ShowCN_2(unsigned char x, unsigned char y, unsigned char N)
{
	unsigned char wm=0;
	unsigned int  adder=32*N;
	OLED_SetPos_2(x , y);
	for(wm = 0;wm < 16;wm++)
	{
		WriteDat_2(F16x16_2[adder]);
		adder += 1;
	}
	OLED_SetPos_2(x,y + 1);
	for(wm = 0;wm < 16;wm++)
	{
		WriteDat_2(F16x16_2[adder]);
		adder += 1;
	}
}



 /**
  * @brief  OLED_DrawBMP_2����ʾBMPλͼ
  * @param  x0,y0 :��ʼ������(x0:0~127, y0:0~7);
	*					x1,y1 : ���Խ���(������)������(x1:1~128,y1:1~8)
	* @retval ��
  */
void OLED_DrawBMP_2(unsigned char x0,unsigned char y0,unsigned char x1,unsigned char y1,unsigned char BMP_2[])
{
	unsigned int j=0;
	unsigned char x,y;

  if(y1%8==0)
		y = y1/8;
  else
		y = y1/8 + 1;
	for(y=y0;y<y1;y++)
	{
		OLED_SetPos_2(x0,y);
    for(x=x0;x<x1;x++)
		{
			WriteDat_2(BMP_2[j++]);
		}
	}
}
