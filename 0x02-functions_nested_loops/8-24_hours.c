#include "main.h"

/**
* jack_bauer - print text
* @h,m: return
* h = hour, m = minutes
* Returning:you can listen to this soundtrack 24 hours
* Loop breaks before 00:00
* Makes sure we print using putchar
**/
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{

	for (m = 0; m < 60; m++)
	{
	_putchar((h / 10) + '0');
	_putchar((h % 10) + '0');
	_putchar(':');
	_putchar((m / 10) + '0');
	_putchar((m % 10) + '0');
	_putchar('\n');
	}
	}
}
