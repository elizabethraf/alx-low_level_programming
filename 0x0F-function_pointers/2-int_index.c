#include "function_pointers.h"

/**
* int_index - check code
* @size:
* @array:
* @cmp:
* Return: if no element matches return -1
**/
int int_index(int *array, int size, int (*cmp)(int));
{
	 size_t k = 0;

    if (size <= 0)
		return (-1);
    {

        while (k < size)
        {
            cmp(array[k]);
            k++;
        }
    }

}

