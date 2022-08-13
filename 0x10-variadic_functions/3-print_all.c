#include "variadic_functions.h"

/**
* print_all - check code
* @format: print all
* Return: 0
**/
void print_all(const char * const format, ...)
{
	unsigned int i;
	char *c;
	char *strings;
	va_list args;

	va_start(args, format);
	strings = "";
	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", strings, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", strings, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", strings, va_arg(args, double));
				break;
			case 's':
				c = va_arg(args, char *);
				if (c == NULL)
					c = "(nil)";
				printf("%s%s", strings, c);
				break;
			default:
				break;
		}
		strings = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}

