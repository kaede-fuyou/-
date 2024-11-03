#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "LED.h"
/************************************************
 ALIENTEK 战舰STM32F103开发板实验0-1
 Template工程模板-新建工程章节使用-HAL库版本
 技术支持：www.openedv.com
 淘宝店铺： http://eboard.taobao.com 
 关注微信公众平台微信号："正点原子"，免费获取STM32资料。
 广州市星翼电子科技有限公司  
 作者：正点原子 @ALIENTEK
************************************************/


/***注意：本工程和教程中的新建工程3.3小节对应***/

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
