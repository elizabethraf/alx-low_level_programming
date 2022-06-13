#include "main.h"
/**
 * print_rev - Entry point
 * @str:address of string to print
 * Return: Always 0
 **/
void print_rev(char *s)
{
	int strl = strlen(s);
	int k;

	for (k = strl; k >= 0; k--)
	{
		_putchar(*(s + k));
	}
	_putchar('\n');
}

