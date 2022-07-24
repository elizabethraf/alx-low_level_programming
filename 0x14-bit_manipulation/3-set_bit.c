#include "main.h"

/**
* set_bit - check code
* @n: sets value of bits
* @index: value of bit at given index
* Return: 1 if it worked or -1 if error occured
**/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (!(*n & (1 << index)))
	{
		*n = *n | (1 << index);
			return (-1);
	}
	return (-1);
}
