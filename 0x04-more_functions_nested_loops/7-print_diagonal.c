#include "main.h"

void print_diagonal(int n)
{
	int ln;
	if (n > 0)
	{
		for (ln = 0; ln < n; ln++)
		{
			_putchar(' ');
			if (ln == (n - 1))
			{
			_putchar('\\');
			}
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}

}

