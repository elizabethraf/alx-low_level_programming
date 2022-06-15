#include "main.h"
/**
 * _puts - Entry point
 * @str:address of string to print
 * Return: Always 0
 **/

void puts_half(char *str)
{
	int l = strlen(str);
	int	k;

	for (k = (l)/2 ; k < l ; k++)
	{
		_putchar(*str+k);
	}
	_putchar('\n');
}
