#include "main.h"

/**
* _pow_recursion - Entry point
* @x:function that return value
* @y:raised to the power of y
* Print with _putchar
* Return: -1 if y is lower than 0
**/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
