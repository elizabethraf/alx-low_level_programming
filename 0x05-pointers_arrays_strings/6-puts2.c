#include "main.h"
/**
 * puts2 - printing every character of a string starting with the first
 * @str:function that prints every character of string
 * Return: Always 0
 **/
void puts2(char *str)
{
	int l = strlen(str);
	int k;

	for (k = 0; k < l; k++)
	{
		if (!(*(str + k) % 2))
		{
			_putchar(*(str + k));
		}
	}
	_putchar('\n');
}

