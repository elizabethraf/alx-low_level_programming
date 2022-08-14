#include <stdarg.h>

/**
* sum_them_all - check code
* @n: sum of parameters
*  Return: 0 always
**/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;
	va_list arglist;

	if (n == 0)
		return (0);
	va_start(arglist, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arglist, int);
	}
	va_end(arglist);

	return (sum);
}

