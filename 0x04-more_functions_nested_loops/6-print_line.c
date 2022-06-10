#include "main.h"
/**
* print_line - Entry point
* Print with _putchar
*
* return  0 always if (successful)
* @n: print the number of characters
**/
void print_line(int n)
{
	int ln;

	if (n > 0)

	{
		for (ln = 0; ln < n; ln++)

		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}

