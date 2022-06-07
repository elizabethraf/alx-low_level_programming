#include "main.h"

/**
* main - Entry point
*
*	Return: Always (0) (Success)
**/

int main(void)
{
	print_puts();
	return (0);
}


/**
* print_puts - print text
* Makes sure we print using putchar
**/

void print_puts(void)
{
	int ch, i;
	char myput[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		ch = (int) myput[i];
		_putchar(ch);
	}
	_putchar('\n');
}

