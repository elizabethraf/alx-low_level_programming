#include "main.h"

/**
* *array_range - Entry point
* @min:create an array
* @max:array of integers
* Print with _putchar
* Return: NULL
**/
int *array_range(int min, int max)
{
	int *ptr;
	int k;

	if (min > max)
	{
		return (NULL);
	}

	ptr = calloc((max - min + 1), sizeof(*ptr));
	if (ptr == NULL)
	{
		return (NULL);
	}

	k = min;
	while (k <= max)
	{
		ptr[k] = k;
		k++;
	}
	return (ptr);
}
