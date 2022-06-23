#include "main.h"
int _poweroot(int a, int s);

/**
* _poweroot - get the real  natural sqrt
* @a: function that returns natural square root of a number
* @s: function that returns natural square root of a number
* 
* Return: -1 if n does not have natural square root
**/
int _poweroot(int a, int s)
{
	if (a == (s *s ))
		return (s);
	else if ((a / 2) == s)
		return (-1);
	else
		return (_poweroot(a,s +1));
}

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
		return (_poweroot(n, temproot));
}

