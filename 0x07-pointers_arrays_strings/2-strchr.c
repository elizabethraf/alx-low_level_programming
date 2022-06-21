#include "main.h"

/**
* *_strchr - Entry point
* @s:function that locate a character in a string
* @c:function that locate a character in a string
* Print with _putchar
* Return: a pointer to the memory c and null if the character is not found
**/
char *_strchr(char *s, char c)
{
	char *ptr = s;
	
	while (*s != '\n')
	{
		if (*s == c)
			break;

		s++;
	}

	if (s == ptr)
	return (NULL);

	return (s);
}

