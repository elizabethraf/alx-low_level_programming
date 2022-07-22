#include "main.h"

/**
* flip_bits - check code
* @n:return the number of bits
* @m: return the number of bits
* Return: the number of change bits
**/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int sum;
	int b, count = 0;
	unsigned int current = n ^ m;

	for (b = 10; b >= 0; b--)
	{
		sum = current >> b;
		if (sum & 1)
			count++;
	}
	return (count);
}
