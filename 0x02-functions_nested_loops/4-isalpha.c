#include "main.h"

/**
*int _isalpha(int c); - checks for lower
* @c: we receiving a character
* Return: then return 1 or 0
**/

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
