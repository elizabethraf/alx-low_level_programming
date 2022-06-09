#include "main.h"

/**
* print_last_digit - print text
* @c: return
* Return: the value of the last digit
* Makes sure we print using putchar
**/
int print_last_digit(int z)
{
	int k;

	if (z < 0)
	{
		k = (z % 10) * -1;
	}
	else
		k = z % 10;

	_putchar('0' + k);
	return (k);
}

