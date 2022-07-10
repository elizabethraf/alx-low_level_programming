#include "main.h"

/**
* *create_array - Entry point
* @c:creates array
* @size:create sze of array
* Return:null if size = 0
**/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *k;

	if (size == 0)
		return (NULL);

	k = (char *)malloc(size * sizeof(char));
	if (k == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		k[i] = c;

	return (k);
}
