#include "search_algos.h"
/**
* binary_search - check code
* @array:is a pointer to the first element
* @size: the size array
* @value: the value of an array
* Return: If value is not present in array return -1
**/
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = suze - 1;

	while (left <= right)
	{
		size_t mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - l;
	}
	return (-1);
}

