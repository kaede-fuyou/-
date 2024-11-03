#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "LED.h"
/************************************************
 ALIENTEK ս��STM32F103������ʵ��0-1
 Template����ģ��-�½������½�ʹ��-HAL��汾
 ����֧�֣�www.openedv.com
 �Ա����̣� http://eboard.taobao.com 
 ��ע΢�Ź���ƽ̨΢�źţ�"����ԭ��"����ѻ�ȡSTM32���ϡ�
 ������������ӿƼ����޹�˾  
 ���ߣ�����ԭ�� @ALIENTEK
************************************************/


/***ע�⣺�����̺ͽ̳��е��½�����3.3С�ڶ�Ӧ***/

int main(void)
{
	HAL_Init();
	Stm32_Clock_Init(RCC_PLL_MUL9);
	__HAL_RCC_GPIOB_CLK_ENABLE();
	__HAL_RCC_GPIOE_CLK_ENABLE();
	LED_Init();
	delay_init(72);
	while(1)
	{
		
		LED_Light(0);
		LED_Light(1);
		delay_ms(500);
		LED_Toggle(0);
		LED_Toggle(1);
		delay_ms(500);
		
	}
}
