#include "main.h"

/**
* *_memset - Entry point
* @s:function that fills memory
* @b:function that fills memory
* @n: function that fills memory
* Print with _putchar
* Return: a pointer to the memory area s
**/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int l;

	for (l = 0; l < n; n++)
	s[l] = b;
	return (s);

}

