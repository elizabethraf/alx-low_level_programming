#include "main.h"

/**
*  *malloc_checked - Entry point
* Print with _putchar
* @b: allocates memory
* Return: 0 alway if (successful)
**/
void *malloc_checked(unsigned int b)
{
	void *s;
	s  = malloc(b);
	if (s == NULL)
		exit (98);
	else
		return (s);

}
