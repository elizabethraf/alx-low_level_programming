#include "main.h"

/**
* *_memset - Entry point
* @s:function that fills memory
* @b:function that fills memory
* @n: function that fills memory
* Print with _putchar
* Return: a pointer to the memory area s
**/
void print_diagsums(int *a, int size)
{
	int l;
	int k;
	int ttl = 0;
	int **locArray;
	locArray = &a;

	for (l = 0; l < size; l++)
	{
		for (k = 0; k < size; k++)
			if (l == k)
			{
				printf("%d ", **locArray );
			}
		locArray++;
	}

	printf("%d \n", ttl);

}
