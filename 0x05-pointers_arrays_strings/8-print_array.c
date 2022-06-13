#include "main.h"
/**
 * _puts - Entry point
 * @str:address of string to print
 * Return: Always 0
 **/

void print_array(int *a, int n)
{
	int k;

	for (k=0; k < n; k++)
	{
		printf("%d, ", *(a+k));
	}
	printf("\n");
}

