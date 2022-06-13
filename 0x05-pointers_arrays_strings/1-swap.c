#include "main.h"
/**
 * swap_int - function that swaps
 * @a:
 * @b:
 **/
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}

