#include "main.h"
/**
* more_numbers - Entry point
* Print with _putchar
*
* return funtion that print 0 - 14
* Return: 0 aslways if (successful)
*
**/
void more_numbers(void)
{
	int c, k;

	for (k = 0; k < 10; k++)

	{
		for (c = 0; c <= 14; c++)

		{
			if (c >= 10)

			{
				_putchar ('0' + c / 10);
			}

			_putchar ('0' + c % 10);
		}

		_putchar('\n');
	}
}
