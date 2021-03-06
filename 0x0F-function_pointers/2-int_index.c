#include "function_pointers.h"

/**
* int_index - check code
* @size: of interger
* @array: of element
* @cmp:compare the elements
* Return: if no element matches return -1
**/
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;
	int ind;

	if (size <= 0 || cmp == NULL)
		return (-1);

	if (array == NULL)
		return (-1);

	k = 0;
	while (k < size)
	{
		ind = cmp(array[k]);
		if (ind != 0)
			return (k);

		k++;
	}

	return (-1);
}

