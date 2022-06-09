#include "main.h"

/**
* print_numbers - Entry point
* Print with _putchar
*
* return funtion that print 0 - 9
* Return: 0 aslways if (successful)
**/
void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)

	{

	_putchar ('0' + x);

	}
	_putchar ('\n');
}

