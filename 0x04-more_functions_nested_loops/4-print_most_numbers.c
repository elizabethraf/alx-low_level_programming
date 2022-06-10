#include "main.h"
/**
* print_most_numbers - Entry point
* Print with _putchar
*
* return do not print 2 and 4
* Return: 0 aslways if (successful)
**/
void print_most_numbers(void)
{
	int k;

	for (k = 0; k <= 9; k++)

	{
		if (k == 2)

		{
			/* skipp */
		}

		else if (k == 4)

		{
			/* skipp */
		}

		else

		{
			_putchar('0' +  k);
		}
	}
	_putchar('\n');
}

