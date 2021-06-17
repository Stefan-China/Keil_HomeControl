
#include "iic1.h"


void I2C1_Init(void)
{
	 /***I2C�˿ڶ���***/
	GPIO_InitTypeDef  GPIO_InitStructure;//����GPIO�ṹ��
  I2C_InitTypeDef  I2C_InitStruct; //I2C�ṹ���ʼ��
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB | RCC_APB2Periph_AFIO, ENABLE);//��GPIOB  �򿪴���
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_I2C1,ENABLE);//I2C1��ʱ��ʱ��
	
	GPIO_InitStructure.GPIO_Pin=GPIO_Pin_6|GPIO_Pin_7;//����GPIO�Ĺܽ�
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;//����GPIO�Ĺܽ����Ƶ��
	GPIO_InitStructure.GPIO_Mode=GPIO_Mode_AF_OD;//��©������ù���
	GPIO_Init(GPIOB,&GPIO_InitStructure);//GPIO���ó�ʼ?
	
	I2C_DeInit(I2C1);//��I2C���мĴ�����ʼ��
	I2C_InitStruct.I2C_Mode = I2C_Mode_I2C; //����I2CģʽΪI2Cģʽ
	I2C_InitStruct.I2C_DutyCycle = I2C_DutyCycle_2;//I2Cռ�ձ� 
	I2C_InitStruct.I2C_OwnAddress1 =0x30;//����stm32�Լ��ĵ�ַ 
	I2C_InitStruct.I2C_Ack = I2C_Ack_Enable;//����I2CӦ�� 
	I2C_InitStruct.I2C_AcknowledgedAddress = I2C_AcknowledgedAddress_7bit;//Ӧ��7λ��ַ 
	I2C_InitStruct.I2C_ClockSpeed = 3200;//�������ݴ����ٶ�ΪHZ 
	I2C_Cmd(I2C1, ENABLE);//����I2C1 
	I2C_Init(I2C1, &I2C_InitStruct);//I2C1��ʼ��   
	I2C_AcknowledgeConfig(I2C1,ENABLE);//����һ�ֽ�һӦ��ģʽ
}

void I2C1_Write_Byte(u8 address,u8 data)
{

	while(I2C_GetFlagStatus(I2C1, I2C_FLAG_BUSY)); //��������Ƿ�æ ���ǿ� SCL ��SDA�Ƿ�Ϊ �� 
	I2C_AcknowledgeConfig(I2C1,ENABLE);//�������Ӧ��
	I2C_GenerateSTART(I2C1,ENABLE);//����start�ź�
	
	while(!I2C_CheckEvent(I2C1,I2C_EVENT_MASTER_MODE_SELECT));//stm32����Ϊ��ģʽ���
	I2C_Send7bitAddress(I2C1,pca_adrr,I2C_Direction_Transmitter);//����I2C������ַ
	
	while(!I2C_CheckEvent(I2C1,I2C_EVENT_MASTER_TRANSMITTER_MODE_SELECTED));//I2C��ַ�������
	I2C_SendData(I2C1,address);//���� �����ַ
	
	while(!I2C_CheckEvent(I2C1,I2C_EVENT_MASTER_BYTE_TRANSMITTED));//�ȴ��������
	I2C_SendData(I2C1,data);//���� ��������
	
	while(!I2C_CheckEvent(I2C1,I2C_EVENT_MASTER_BYTE_TRANSMITTED));//�ȴ��������
	I2C_GenerateSTOP(I2C1,ENABLE);//����stop�ź�
}

u8 I2C1_Read_Data(u8 read_addr)
{
 
	while(I2C_GetFlagStatus(I2C1, I2C_FLAG_BUSY)); //��������Ƿ�æ ���ǿ� SCL ��SDA�Ƿ�Ϊ �� 
	I2C_AcknowledgeConfig(I2C1,ENABLE);//�������Ӧ��
	I2C_GenerateSTART(I2C1,ENABLE);//����start�ź�
	
	while(!I2C_CheckEvent(I2C1,I2C_EVENT_MASTER_MODE_SELECT));//stm32����Ϊ��ģʽ���
	I2C_Send7bitAddress(I2C1,pca_adrr,I2C_Direction_Transmitter);//����I2C������ַ
	
	while(!I2C_CheckEvent(I2C1,I2C_EVENT_MASTER_TRANSMITTER_MODE_SELECTED));//I2C��ַ�������
	I2C_SendData(I2C1,read_addr);//���� �����ַ

	while(!I2C_CheckEvent(I2C1,I2C_EVENT_MASTER_BYTE_TRANSMITTED));//�ȴ��������
	I2C_GenerateSTART(I2C1,ENABLE);//����start�ź�
	
	while(!I2C_CheckEvent(I2C1,I2C_EVENT_MASTER_MODE_SELECT));//stm32����Ϊ��ģʽ���
	I2C_Send7bitAddress(I2C1,pca_adrr|0x01,I2C_Direction_Receiver);//����I2C������ַ
	
	while(!I2C_CheckEvent(I2C1,I2C_EVENT_MASTER_RECEIVER_MODE_SELECTED));//I2C��ַ�������
	I2C_AcknowledgeConfig(I2C1,DISABLE);//�ر�Ӧ��
	I2C_GenerateSTOP(I2C1,ENABLE);//����ֹͣλ
	
	while(!I2C_CheckEvent(I2C1,I2C_EVENT_MASTER_BYTE_RECEIVED));//�ȴ��������
	return I2C_ReceiveData(I2C1);//����������ǿ������ת���󷵻�

}


//BCDתDEC��BCDΪ8421�룩
u8 BCD2HEX(u8 val)
{
    u8 i;
    i= val&0x0f;
    val >>= 4;
    val &= 0x0f;
    val *= 10;
    i += val;
    
    return i;
}

//DECתBCD��BCDΪ8421�룩
u16 B_BCD(u8 val)
{
  u8 i,j,k;
  i=val/10;
  j=val%10;
  k=j+(i<<4);
  return k;
}


