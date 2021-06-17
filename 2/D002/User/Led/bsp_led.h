#ifndef __LED_H
#define	__LED_H


#include "stm32f10x.h"


/* ����GPIO�˿�, �û�ֻ��Ҫ�޸�����Ĵ��뼴�ɸı���Ƶ����� */
// R-ȫ�ֵ�
#define LED0_GPIO_PORT    	GPIOE			              /* GPIO�˿� */
#define LED0_GPIO_CLK 	    RCC_APB2Periph_GPIOE		/* GPIO�˿�ʱ�� */
#define LED0_GPIO_PIN		    GPIO_Pin_3			        /* ���ӵ�SCLʱ���ߵ�GPIO */

#define LED1_GPIO_PORT    	GPIOE			              /* GPIO�˿� */
#define LED1_GPIO_CLK 	    RCC_APB2Periph_GPIOE		/* GPIO�˿�ʱ�� */
#define LED1_GPIO_PIN		    GPIO_Pin_2			        /* ���ӵ�SCLʱ���ߵ�GPIO */

#define LED2_GPIO_PORT    	GPIOE			              /* GPIO�˿� */
#define LED2_GPIO_CLK 	    RCC_APB2Periph_GPIOE		/* GPIO�˿�ʱ�� */
#define LED2_GPIO_PIN		    GPIO_Pin_5			        /* ���ӵ�SCLʱ���ߵ�GPIO */

#define LED3_GPIO_PORT    	GPIOE			              /* GPIO�˿� */
#define LED3_GPIO_CLK 	    RCC_APB2Periph_GPIOE		/* GPIO�˿�ʱ�� */
#define LED3_GPIO_PIN		    GPIO_Pin_4			        /* ���ӵ�SCLʱ���ߵ�GPIO */

#define LED4_GPIO_PORT    	GPIOE			              /* GPIO�˿� */
#define LED4_GPIO_CLK 	    RCC_APB2Periph_GPIOE		/* GPIO�˿�ʱ�� */
#define LED4_GPIO_PIN		    GPIO_Pin_6			        /* ���ӵ�SCLʱ���ߵ�GPIO */

#define LED5_GPIO_PORT    	GPIOF			              /* GPIO�˿� */
#define LED5_GPIO_CLK 	    RCC_APB2Periph_GPIOF		/* GPIO�˿�ʱ�� */
#define LED5_GPIO_PIN		    GPIO_Pin_0			        /* ���ӵ�SCLʱ���ߵ�GPIO */

#define LED6_GPIO_PORT    	GPIOF			              /* GPIO�˿� */
#define LED6_GPIO_CLK 	    RCC_APB2Periph_GPIOF		/* GPIO�˿�ʱ�� */
#define LED6_GPIO_PIN		    GPIO_Pin_2			        /* ���ӵ�SCLʱ���ߵ�GPIO */

#define LED7_GPIO_PORT    	GPIOF			              /* GPIO�˿� */
#define LED7_GPIO_CLK 	    RCC_APB2Periph_GPIOF		/* GPIO�˿�ʱ�� */
#define LED7_GPIO_PIN		    GPIO_Pin_1			        /* ���ӵ�SCLʱ���ߵ�GPIO */

#define LED8_GPIO_PORT    	GPIOF			              /* GPIO�˿� */
#define LED8_GPIO_CLK 	    RCC_APB2Periph_GPIOF		/* GPIO�˿�ʱ�� */
#define LED8_GPIO_PIN		    GPIO_Pin_4			        /* ���ӵ�SCLʱ���ߵ�GPIO */

#define LED9_GPIO_PORT    	GPIOF			              /* GPIO�˿� */
#define LED9_GPIO_CLK 	    RCC_APB2Periph_GPIOF		/* GPIO�˿�ʱ�� */
#define LED9_GPIO_PIN		    GPIO_Pin_3			        /* ���ӵ�SCLʱ���ߵ�GPIO */

#define LED10_GPIO_PORT    	GPIOF			              /* GPIO�˿� */
#define LED10_GPIO_CLK 	    RCC_APB2Periph_GPIOF		/* GPIO�˿�ʱ�� */
#define LED10_GPIO_PIN		  GPIO_Pin_6			        /* ���ӵ�SCLʱ���ߵ�GPIO */
//****

#define LED11_GPIO_PORT    	GPIOC			              /* GPIO�˿� */
#define LED11_GPIO_CLK 	    RCC_APB2Periph_GPIOC		/* GPIO�˿�ʱ�� */
#define LED11_GPIO_PIN		  GPIO_Pin_5			        /* ���ӵ�SCLʱ���ߵ�GPIO */

#define LED12_GPIO_PORT    	GPIOC			              /* GPIO�˿� */
#define LED12_GPIO_CLK 	    RCC_APB2Periph_GPIOC		/* GPIO�˿�ʱ�� */
#define LED12_GPIO_PIN		  GPIO_Pin_1			        /* ���ӵ�SCLʱ���ߵ�GPIO */

#define LED13_GPIO_PORT    	GPIOC			              /* GPIO�˿� */
#define LED13_GPIO_CLK 	    RCC_APB2Periph_GPIOC		/* GPIO�˿�ʱ�� */
#define LED13_GPIO_PIN		  GPIO_Pin_3			        /* ���ӵ�SCLʱ���ߵ�GPIO */

/** the macro definition to trigger the led on or off 
  * 1 - off
  *0 - on
  */
//#define ON  0
//#define OFF 1

#define LED0_IN_STA   GPIO_ReadOutputDataBit(LED0_GPIO_PORT, LED0_GPIO_PIN) //PB1����LED1,��ȡ��ƽ״̬�������ж�LED1�ǵ�������Ϩ��
#define LED1_IN_STA   GPIO_ReadOutputDataBit(LED1_GPIO_PORT, LED1_GPIO_PIN) //PB1����LED1,��ȡ��ƽ״̬�������ж�LED1�ǵ�������Ϩ��
#define LED2_IN_STA   GPIO_ReadOutputDataBit(LED2_GPIO_PORT, LED2_GPIO_PIN) //PB1����LED1,��ȡ��ƽ״̬�������ж�LED1�ǵ�������Ϩ��
#define LED3_IN_STA   GPIO_ReadOutputDataBit(LED3_GPIO_PORT, LED3_GPIO_PIN) //PB1����LED1,��ȡ��ƽ״̬�������ж�LED1�ǵ�������Ϩ��
#define LED4_IN_STA   GPIO_ReadOutputDataBit(LED4_GPIO_PORT, LED4_GPIO_PIN) //PB1����LED1,��ȡ��ƽ״̬�������ж�LED1�ǵ�������Ϩ��
#define LED5_IN_STA   GPIO_ReadOutputDataBit(LED5_GPIO_PORT, LED5_GPIO_PIN) //PB1����LED1,��ȡ��ƽ״̬�������ж�LED1�ǵ�������Ϩ��
#define LED6_IN_STA   GPIO_ReadOutputDataBit(LED6_GPIO_PORT, LED6_GPIO_PIN) //PB1����LED1,��ȡ��ƽ״̬�������ж�LED1�ǵ�������Ϩ��
#define LED7_IN_STA   GPIO_ReadOutputDataBit(LED7_GPIO_PORT, LED7_GPIO_PIN) //PB1����LED1,��ȡ��ƽ״̬�������ж�LED1�ǵ�������Ϩ��
#define LED8_IN_STA   GPIO_ReadOutputDataBit(LED8_GPIO_PORT, LED8_GPIO_PIN) //PB1����LED1,��ȡ��ƽ״̬�������ж�LED1�ǵ�������Ϩ��
#define LED9_IN_STA   GPIO_ReadOutputDataBit(LED9_GPIO_PORT, LED9_GPIO_PIN) //PB1����LED1,��ȡ��ƽ״̬�������ж�LED1�ǵ�������Ϩ��
#define LED10_IN_STA   GPIO_ReadOutputDataBit(LED10_GPIO_PORT, LED10_GPIO_PIN) //PB1����LED1,��ȡ��ƽ״̬�������ж�LED1�ǵ�������Ϩ��
#define LED11_IN_STA   GPIO_ReadOutputDataBit(LED11_GPIO_PORT, LED11_GPIO_PIN) //PB1����LED1,��ȡ��ƽ״̬�������ж�LED1�ǵ�������Ϩ��
#define LED12_IN_STA   GPIO_ReadOutputDataBit(LED12_GPIO_PORT, LED12_GPIO_PIN) //PB1����LED1,��ȡ��ƽ״̬�������ж�LED1�ǵ�������Ϩ��
#define LED13_IN_STA   GPIO_ReadOutputDataBit(LED13_GPIO_PORT, LED13_GPIO_PIN) //PB1����LED1,��ȡ��ƽ״̬�������ж�LED1�ǵ�������Ϩ��



/* ֱ�Ӳ����Ĵ����ķ�������IO */
#define	digitalHi(p,i)		 {p->BSRR=i;}	 //���Ϊ�ߵ�ƽ		
#define digitalLo(p,i)		 {p->BRR=i;}	 //����͵�ƽ
#define digitalToggle(p,i) {p->ODR ^=i;} //�����ת״̬


/* �������IO�ĺ� */

#define LED0_TOGGLE		 digitalToggle(LED0_GPIO_PORT,LED0_GPIO_PIN)
#define LED0_ON		   digitalHi(LED0_GPIO_PORT,LED0_GPIO_PIN)
#define LED0_OFF			   digitalLo(LED0_GPIO_PORT,LED0_GPIO_PIN)

#define LED1_TOGGLE		 digitalToggle(LED1_GPIO_PORT,LED1_GPIO_PIN)
#define LED1_ON		   digitalHi(LED1_GPIO_PORT,LED1_GPIO_PIN)
#define LED1_OFF			   digitalLo(LED1_GPIO_PORT,LED1_GPIO_PIN)

#define LED2_TOGGLE		 digitalToggle(LED2_GPIO_PORT,LED2_GPIO_PIN)
#define LED2_ON		   digitalHi(LED2_GPIO_PORT,LED2_GPIO_PIN)
#define LED2_OFF			   digitalLo(LED2_GPIO_PORT,LED2_GPIO_PIN)

#define LED3_TOGGLE		 digitalToggle(LED3_GPIO_PORT,LED3_GPIO_PIN)
#define LED3_ON		   digitalHi(LED3_GPIO_PORT,LED3_GPIO_PIN)
#define LED3_OFF			   digitalLo(LED3_GPIO_PORT,LED3_GPIO_PIN)

#define LED4_TOGGLE		 digitalToggle(LED4_GPIO_PORT,LED4_GPIO_PIN)
#define LED4_ON		   digitalHi(LED4_GPIO_PORT,LED4_GPIO_PIN)
#define LED4_OFF			   digitalLo(LED4_GPIO_PORT,LED4_GPIO_PIN)

#define LED5_TOGGLE		 digitalToggle(LED5_GPIO_PORT,LED5_GPIO_PIN)
#define LED5_ON		   digitalHi(LED5_GPIO_PORT,LED5_GPIO_PIN)
#define LED5_OFF			   digitalLo(LED5_GPIO_PORT,LED5_GPIO_PIN)

#define LED6_TOGGLE		 digitalToggle(LED6_GPIO_PORT,LED6_GPIO_PIN)
#define LED6_ON		   digitalHi(LED6_GPIO_PORT,LED6_GPIO_PIN)
#define LED6_OFF			   digitalLo(LED6_GPIO_PORT,LED6_GPIO_PIN)

#define LED7_TOGGLE		 digitalToggle(LED7_GPIO_PORT,LED7_GPIO_PIN)
#define LED7_ON		   digitalHi(LED7_GPIO_PORT,LED7_GPIO_PIN)
#define LED7_OFF			   digitalLo(LED7_GPIO_PORT,LED7_GPIO_PIN)

#define LED8_TOGGLE		 digitalToggle(LED8_GPIO_PORT,LED8_GPIO_PIN)
#define LED8_ON		   digitalHi(LED8_GPIO_PORT,LED8_GPIO_PIN)
#define LED8_OFF			   digitalLo(LED8_GPIO_PORT,LED8_GPIO_PIN)

#define LED9_TOGGLE		 digitalToggle(LED9_GPIO_PORT,LED9_GPIO_PIN)
#define LED9_ON		   digitalHi(LED9_GPIO_PORT,LED9_GPIO_PIN)
#define LED9_OFF			   digitalLo(LED9_GPIO_PORT,LED9_GPIO_PIN)

#define LED10_TOGGLE		 digitalToggle(LED10_GPIO_PORT,LED10_GPIO_PIN)
#define LED10_ON		   digitalHi(LED10_GPIO_PORT,LED10_GPIO_PIN)
#define LED10_OFF			 digitalLo(LED10_GPIO_PORT,LED10_GPIO_PIN)

#define LED11_TOGGLE		 digitalToggle(LED11_GPIO_PORT,LED11_GPIO_PIN)
#define LED11_ON		   digitalHi(LED11_GPIO_PORT,LED11_GPIO_PIN)
#define LED11_OFF			 digitalLo(LED11_GPIO_PORT,LED11_GPIO_PIN)

#define LED12_TOGGLE		 digitalToggle(LED12_GPIO_PORT,LED12_GPIO_PIN)
#define LED12_ON		   digitalHi(LED12_GPIO_PORT,LED12_GPIO_PIN)
#define LED12_OFF			 digitalLo(LED12_GPIO_PORT,LED12_GPIO_PIN)

#define LED13_TOGGLE		 digitalToggle(LED13_GPIO_PORT,LED13_GPIO_PIN)
#define LED13_ON		   digitalHi(LED13_GPIO_PORT,LED13_GPIO_PIN)
#define LED13_OFF			 digitalLo(LED13_GPIO_PORT,LED13_GPIO_PIN)

void GPIO_Config(void);

#endif /* __LED_H */
