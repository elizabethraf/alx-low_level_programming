#include "main.h"

/**
* get_bit - check code
* @n: function that returns the value of bit
* @index: value of a bit given index
* Return: value of bit index or -1 if error occured
**/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int len = n;

	if (n == 0 || index == 0)
		return (0);

	if (!(len & (1 << index)))
	{
		len = len | (1 << index);
			return (-1);
	}
	else
	{
		return (1);
	}
}
