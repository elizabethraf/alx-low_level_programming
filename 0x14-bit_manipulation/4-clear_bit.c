#include "main.h"

/**
* clear_bit - check code
* @n: sets the value of bit
* @index: value of bit
* Return: 1 if it worked o -1 if an error occured
**/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set = ~(1 << index);
	{
		*n = *n & set;
	}
	return (1);
}
