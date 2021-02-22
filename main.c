	#include "stm32f4xx.h"

int main(void)
{
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN;

	GPIOD->MODER |= GPIO_MODER_MODER15_0;
	GPIOD->MODER &= ~GPIO_MODER_MODER15_1;

  int i=0;

	while (1)
	{
		GPIOD->ODR ^= (1 << 15);
		for (i=0; i<500000; i++);
	}
}
