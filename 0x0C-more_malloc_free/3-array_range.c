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
	for (i = 0; i < k; i++)
	{
		if (*(k + i) > max)
			max = * (k + i);
		if (*(k + i) < min)
			min = * (k + i);
	{
		return (0);
	}
}
