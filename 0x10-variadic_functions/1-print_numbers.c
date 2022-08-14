#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
* print_numbers - check code
* @n: prints numbers followed by new line
* @separator: number of lines
* Return: 0
**/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(numbers);
}