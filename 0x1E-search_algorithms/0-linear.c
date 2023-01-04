#include "search_algos.h"
/**
* linear_search - check code
* @array: is a pointer to first element
* @size: the size of an array
* @value: the value of an array
* Return: -1 if value is present in array
**/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}

