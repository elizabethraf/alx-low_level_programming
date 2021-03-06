#include "main.h"
/**
* *_strncat - Entry point
* @n:src does not need to be null-terminated if it contains n
* @dest:concatenates two strings
* @src:concatenates two strings
* Print with _putchar
* Return: src does not need to be null-terminated if it contains n
**/
char *_strncat(char *dest, char *src, int n)
{
	size_t l = strlen(dest);
	int i;

for (i = 0; i < n && src[i] != '\0'; i++)
	{
	dest[l + i] = src[i];
	}
	dest[l + i] = '\0';

	return (dest);
}

