#include "main.h"
/**
* reverse_array - Entry point
* @a:
* @n:
* Return: Always 0
**/
void reverse_array(int *a, int n)
{
	int strl = strlen(n) - 1;
	int *a;

	for (*a = strl; *a >= 0; *a--)
	{
		_putchar(*(n + a));
	}
	_putchar('\n');
}

