#include "main.h"

/**
* print_sign - print text
* @c:We receiving a character
* Return:then return 1, 0, -1 or -0
* Makes sure we print using putchar
**/
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
	return (0);
	}
	else
		return (-1);
}
