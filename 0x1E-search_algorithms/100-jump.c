#include "search_algos.h"

/**
* jump_search - check the code
* @array:is a pointer to the first element
* @size: the size of the array
* @value: the value of array
* Return:if array is NULL, your function must return -1
**/
int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size);
	int prev = 0;

	while (array[(int) fmin(step, size) - 1] < value)
	{
		prev = step;
		step += sqrt(size);
		if ((int) size <= prev)
		{
			return (-1);
		}
	}
	while (array[prev] < value)
	{
		prev++;

		if (prev == (int) fmin(step, size))
		{
			return (-1);
		}
	}
	if (array[prev] == value)
	{
		return (prev);
	}
	return (-1);
}
