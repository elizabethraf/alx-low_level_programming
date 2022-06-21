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
	int k = size;
	int ttl1 = 0;
	int ttl2 = 0;

	for (l = 0; l < size; l++)
	{
				ttl1 += a[l];
		a += k;
	}

	printf("%d, %d \n", ttl2, ttl1);

}
