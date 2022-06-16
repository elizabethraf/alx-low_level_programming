#include "main.h"

/**
* *_strncpy - Entry point
* @dest:copy two strings
* @src:copy two strings
* Print with _putchar
* Return: a pointer to dest
**/
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; k < n && src[k] != '\0'; k++)
		dest[k] = src[k];

	for ( ; k < n; k++)
		dest[k] = '\0';

	return (dest);
}

