#include "main.h"

/**
* _sqrt_recursion - Entry point
* @n: function that returns natural square root of a number
* Print with _putchar
* Return: -1 if n does not have natural square root
**/
int _sqrt_recursion(int n)
{
	int temproot;
	temproot = 0;

	if (n == 0)
		return (1);
	else if (n < 1)
		return (-1);
	else
		return ((n == (n_sqrt_recursion(temproot + 1)/2));
}

