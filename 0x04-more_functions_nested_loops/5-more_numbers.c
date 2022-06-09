#include "main.h"

void more_numbers(void)
{
	int c, k;

	for (k = 0; k < 10; k++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
			{
				_putchar('0' + c/10);
			}
			_putchar('0' + c%10);
		}
		_putchar('\n');
	}
}
