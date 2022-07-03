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
	int s;

	if (min > max)
	{
		return (NULL);
	}

	s = (max - min) + 1;

	ptr = calloc(s, sizeof(*ptr));

	if (ptr == NULL)
	{
		return (NULL);
	}

	k = 0;
	while (k < s)
	{
		ptr[k] = min++;
		k++;
	}
	return (ptr);
}
