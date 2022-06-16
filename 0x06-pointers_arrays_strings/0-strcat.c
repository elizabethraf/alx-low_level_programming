#include "main.h"

/**
* *_strcat - Entry point
* @dest:concatenates two strings
* @src:concatenates two strings
* Print with _putchar
* Return: a pointer to the resulting string dest
**/
char *_strcat(char *dest, char *src)
{
	size_t k = strlen(dest);
	int i;

for (i = 0; src[i] != '\0'; i++)
	{
	dest[k] = src[i];
		k++;
	}

	return (dest);
}

