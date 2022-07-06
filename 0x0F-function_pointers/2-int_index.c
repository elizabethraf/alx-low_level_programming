#include "function_pointers.h"

/**
* int_index - check code
* @size:
* @array:
* @cmp:
* Return: if no element matches return -1
**/
int int_index(int *array, int size, int (*cmp)(int))
{
	 unsigned int k;


    if (size <= 0 || cmp == 0 || array == 0)
		return (-1);
    {

        while (k < size)
			   	k++;
        {
			cmp(array[k]);
				return (-1);
        }
		return (1);
    }

}

