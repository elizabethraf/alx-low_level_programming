#include "main.h"

/**
* binary_to_uint - check code
* @b: converts birnarty number
* Return: the converted number
**/
unsigned int binary_to_uint(const char *b)
{
	unsigned int len;
	int a;
	unsigned int l = 1;
	unsigned int k = 0;

	len = strlen(b);
	for (a = len - 1; a >= 0; a--)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
		if (b[a] == '1')
		{
			k += l;
		}
		l *= 2;
	}
	return (k);
}
