#include "main.h"

/**
* *_realloc - function for realloc
* @ptr: the old pointer
* @old_size: the old size
* @new_size: the new size
*
* Return: the results of realloc
**/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	(void)old_size;

	if (new_size == old_size)
		return (ptr);

	p = realloc(ptr, new_size);

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	return (p);
}
