#include "main.h"

/**
* *_memcpy - Entry point
* @n:function that copymemory
* @src:function that copy memory
* @dest: function that copy memory
* Print with _putchar
* Return: a pointer to the memory area dest
**/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)

	dest[k] = src[k];

	return (dest);

}

