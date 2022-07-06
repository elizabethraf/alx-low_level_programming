#include "function_pointers.h"

/**
* array_iterator - check code
* @size:
* @action:
* Return:0 always
i* print with putchar
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t k = 0;

	while (k < size)
	{
		action(array[k]);
		k++;
	}

}
