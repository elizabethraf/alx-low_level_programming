#include "main.h"

/**
* *_strpbrk - Entry point
* @s:function that searches string
* @accept:searches any sety of bytes
* Print with _putchar
* Return: a pointer s
**/
char *_strpbrk(char *s, char *accept)
{
    if ((s == NULL) || (accept == NULL))
	{
        return (NULL);
	}

	while (*s)
	{
		if (strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	return (NULL);
}
