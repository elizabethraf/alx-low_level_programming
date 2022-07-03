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
	int arr[5] = {0,1,2,3,5};
	int max = arr[0];
	int min = arr[0];
	unsigned int i;
	unsigned int k;

	k = malloc(min, max * size);
	for (i = 1; i < 5; i++)
	{
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}

	if (min > max)
		return (NULL);
	arr = malloc((min, max * sizeof)

	if (k == NULL)
		return (NULL);

	return (k);
}
