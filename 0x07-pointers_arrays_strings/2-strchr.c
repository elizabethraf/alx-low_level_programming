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

	while (*s != '\0')
	{
		if (*s == c)
			break;
		s++;
	}
	if (*ptr == *s)
		return(NULL);

	return (s);
}
