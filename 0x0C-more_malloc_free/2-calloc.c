#include "main.h"

/**
* *_calloc - Entry point
* Print with _putchar
* @nmemb:memory allocate
* @size:using malloc
* Return: NULL
**/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *k;

	if (nmemb == 0 || size == 0)
		return (NULL);

	k = calloc(size, sizeof(nmemb));

	if (k == NULL)
		return (NULL);

	return (k);
}
