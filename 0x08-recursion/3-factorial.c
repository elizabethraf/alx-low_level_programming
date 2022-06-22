#include "main.h"

/**
* factorial - Entry point
* @n: function that returns factorial
* Print with _putchar
* Return: if n is lower than 0 return -1
**/
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));

}
