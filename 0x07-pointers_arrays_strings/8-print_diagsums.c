#include "main.h"

/**
* *_print_diagsums - print diag sums
* @a:function that fills memory
* @size:function that fills memory
* Return: nothing to return
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

	a-= k;
	l = k;
	for (k = 0; k < size; k++)
	{
		ttl2 += a[k];
		a -= l;
	}

	printf("%d, %d \n", ttl1, ttl2);

}
