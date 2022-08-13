#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
* print_strings - check code
* @n: prints strings
* @separator: number of lines
* Return: 0
**/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *s;

	if (separator == NULL)
		separator = "";
	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(strings, char *);

		if (s == NULL)
		{
			s = "(nil)";
			printf("%s", s);
		}
	}
	printf("\n");
	va_end(strings);
}
