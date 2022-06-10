include "main.h"
/**
* print_diagonal - Entry point
* Print with _putchar
* @n: number of times character to be printed
* Return: 0 aslways if (successful)
**/
void print_diagonal(int n)
{
	int len;

	if (n > 0)

	{
		for (len = 0; len < n; len++)

		{
			_putchar(' ');

			if (len == (n - 1))
				continue;

			_putchar('\\');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}

}

