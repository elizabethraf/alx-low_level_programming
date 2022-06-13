#include "main.h"
/**
 * _puts - Entry point
 * @str:address of string to print
 * Return: Always 0
 **/
void puts2(char *str)
{
	int l = strlen(str) -1;
	int k;

	for (k = 0; k<=l; k++)
	{
		if( !(*(str+k) % 2))
		{
			_putchar(*(str+k));
		}
	}
	_putchar('\n');
}

