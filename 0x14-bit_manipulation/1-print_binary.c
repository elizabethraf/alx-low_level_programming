#include "main.h"

/**
* print_binary - check the code
* @n: prints binary representation
**/
void print_binary(unsigned long int n)
{
	unsigned int k, l, lmask;
	char start_p = 'f';

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n == 1)
	{
		_putchar('1');
		return;
	}

	for (k = 64; k > 0; k--)
	{
		l = n >> (k - 1);
		lmask = l & 1;

		if (lmask == 1)
			start_p = 't';

		if (start_p == 't')
			_putchar('0' + lmask);
	}
}
