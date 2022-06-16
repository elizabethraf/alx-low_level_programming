#include "main.h"
/**
* *_strncat - Entry point
* @dest:concatenates two strings
* @src:concatenates two strings
* Print with _putchar
* Return: a pointer resulting string dest
**/
char *_strncat(char *dest, char *src, int n)
{
	int l = strlen(dest);
	int i;

for (i = 0; i < n && src[i] != '\0'; i++)
	{
	dest[l + i] = src[i];
	}
	dest[l + i] = '\0';

	return (0);
}

