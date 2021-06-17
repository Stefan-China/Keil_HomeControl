
#include "iic1.h"


void I2C1_Init(void)
{
	 /***I2C端口定义***/
	GPIO_InitTypeDef  GPIO_InitStructure;//定义GPIO结构体
  I2C_InitTypeDef  I2C_InitStruct; //I2C结构体初始化
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB | RCC_APB2Periph_AFIO, ENABLE);//打开GPIOB  打开串口
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_I2C1,ENABLE);//I2C1的时钟时能
	
	GPIO_InitStructure.GPIO_Pin=GPIO_Pin_6|GPIO_Pin_7;//设置GPIO的管脚
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;//设置GPIO的管脚最大频率
	GPIO_InitStructure.GPIO_Mode=GPIO_Mode_AF_OD;//开漏输出复用功能
	GPIO_Init(GPIOB,&GPIO_InitStructure);//GPIO设置初始?
	
	I2C_DeInit(I2C1);//对I2C进行寄存器初始化
	I2C_InitStruct.I2C_Mode = I2C_Mode_I2C; //设置I2C模式为I2C模式
	I2C_InitStruct.I2C_DutyCycle = I2C_DutyCycle_2;//I2C占空比 
	I2C_InitStruct.I2C_OwnAddress1 =0x30;//设置stm32自己的地址 
	I2C_InitStruct.I2C_Ack = I2C_Ack_Enable;//允许I2C应答 
	I2C_InitStruct.I2C_AcknowledgedAddress = I2C_AcknowledgedAddress_7bit;//应答7位地址 
	I2C_InitStruct.I2C_ClockSpeed = 3200;//设置数据传输速度为HZ 
	I2C_Cmd(I2C1, ENABLE);//允许I2C1 
	I2C_Init(I2C1, &I2C_InitStruct);//I2C1初始化   
	I2C_AcknowledgeConfig(I2C1,ENABLE);//允许一字节一应答模式
}

void I2C1_Write_Byte(u8 address,u8 data)
{

	while(I2C_GetFlagStatus(I2C1, I2C_FLAG_BUSY)); //检测总线是否忙 就是看 SCL 或SDA是否为 低 
	I2C_AcknowledgeConfig(I2C1,ENABLE);//允许接受应答
	I2C_GenerateSTART(I2C1,ENABLE);//发送start信号
	
	while(!I2C_CheckEvent(I2C1,I2C_EVENT_MASTER_MODE_SELECT));//stm32设置为主模式完毕
	I2C_Send7bitAddress(I2C1,pca_adrr,I2C_Direction_Transmitter);//发送I2C器件地址
	
	while(!I2C_CheckEvent(I2C1,I2C_EVENT_MASTER_TRANSMITTER_MODE_SELECTED));//I2C地址发送完毕
	I2C_SendData(I2C1,address);//发送 命令地址
	
	while(!I2C_CheckEvent(I2C1,I2C_EVENT_MASTER_BYTE_TRANSMITTED));//等待发送完毕
	I2C_SendData(I2C1,data);//发送 命令数据
	
	while(!I2C_CheckEvent(I2C1,I2C_EVENT_MASTER_BYTE_TRANSMITTED));//等待发送完毕
	I2C_GenerateSTOP(I2C1,ENABLE);//发送stop信号
}

u8 I2C1_Read_Data(u8 read_addr)
{
 
	while(I2C_GetFlagStatus(I2C1, I2C_FLAG_BUSY)); //检测总线是否忙 就是看 SCL 或SDA是否为 低 
	I2C_AcknowledgeConfig(I2C1,ENABLE);//允许接受应答
	I2C_GenerateSTART(I2C1,ENABLE);//发送start信号
	
	while(!I2C_CheckEvent(I2C1,I2C_EVENT_MASTER_MODE_SELECT));//stm32设置为主模式完毕
	I2C_Send7bitAddress(I2C1,pca_adrr,I2C_Direction_Transmitter);//发送I2C器件地址
	
	while(!I2C_CheckEvent(I2C1,I2C_EVENT_MASTER_TRANSMITTER_MODE_SELECTED));//I2C地址发送完毕
	I2C_SendData(I2C1,read_addr);//发送 命令地址

	while(!I2C_CheckEvent(I2C1,I2C_EVENT_MASTER_BYTE_TRANSMITTED));//等待发送完毕
	I2C_GenerateSTART(I2C1,ENABLE);//发送start信号
	
	while(!I2C_CheckEvent(I2C1,I2C_EVENT_MASTER_MODE_SELECT));//stm32设置为主模式完毕
	I2C_Send7bitAddress(I2C1,pca_adrr|0x01,I2C_Direction_Receiver);//发送I2C器件地址
	
	while(!I2C_CheckEvent(I2C1,I2C_EVENT_MASTER_RECEIVER_MODE_SELECTED));//I2C地址发送完毕
	I2C_AcknowledgeConfig(I2C1,DISABLE);//关闭应答
	I2C_GenerateSTOP(I2C1,ENABLE);//产生停止位
	
	while(!I2C_CheckEvent(I2C1,I2C_EVENT_MASTER_BYTE_RECEIVED));//等待接受完成
	return I2C_ReceiveData(I2C1);//将读到数据强制类型转换后返回

}


//BCD转DEC（BCD为8421码）
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

//DEC转BCD（BCD为8421码）
u16 B_BCD(u8 val)
{
  u8 i,j,k;
  i=val/10;
  j=val%10;
  k=j+(i<<4);
  return k;
}


