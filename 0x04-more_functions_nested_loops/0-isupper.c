#include "main.h"
#include <ctype.h>

/**
* _isupper - Entry point
* @c:
* Print with _putchar
* Return: 1 if its uppercase and 0 otherwise
**/
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

