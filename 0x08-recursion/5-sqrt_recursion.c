#include "main.h"

/**
* _sqrt_recursion - Entry point
* @n: function that returns natural square root of a number
* Print with _putchar
* Return: -1 if n does not have natural square root
**/
int _sqrt_recursion(int n)
{
	if (n % 2)
		return (n);
		{
	int p;
	p = 0;

		
	while ((p * p) <= n)
	{
	_sqrt_recursion (n + 1);
	p++;
	}
	return (p-1);
	}
}
