#include "main.h"


void print_most_numbers(void)
{
	int k;
	for (k = 0; k <= 9; k++)
	{
		if (k == 2)
		{
			/* skipp */
		}
		else if (k == 4)
		{
			/* skipp */
		}
		else
		{
			_putchar('0' +  k);
		}
	}
	_putchar('\n');
}

