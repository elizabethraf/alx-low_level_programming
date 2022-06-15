#include "main.h"
/**
 * _puts - Entry point
 * @str:address of string to print
 * Return: Always 0
 **/

char *_strcpy(char *dest, char *src)
{
	int l = strlen(src);
	int k;

	for (k=0; k < l ; k++)
	{
		dest[k] = src[k];
	}
	dest[k + 1] = '\0';
	return (dest);
}

