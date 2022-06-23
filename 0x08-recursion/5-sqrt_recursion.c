#include "main.h"

/**
* _sqrt_recursion - Entry point
* @n: function that returns natural square root of a number
* Print with _putchar
* Return: -1 if n does not have natural square root
**/
int _sqrt_recursion(int n)
{
	if ((n% n) != 0)
		return (-1);
	else
		return (n && _sqrt_recursion(n - 1));
}

