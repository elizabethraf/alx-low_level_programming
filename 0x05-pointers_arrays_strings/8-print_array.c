#include "main.h"
/**
 * print_array - Entry point
 * @n:function that prints n
 * @a:function that print
 * Return: Always 0
 **/

void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		printf("%d", *(a + k));
	}
	printf("\n");
}

