include "main.h"
/**
* print_diagonal - Entry point
* Print with _putchar
* @n: number of times character to be printed
* Return: 0 aslways if (successful)
**/
void print_diagonal(int n)
{
	int ln;

	if (n > 0)

	{
		for (ln = 0; ln < n; ln++)

		{
			_putchar(' ');

			if (ln == (n - 1))
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

