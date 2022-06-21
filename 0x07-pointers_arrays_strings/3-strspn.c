#include "main.h"

/**
*  _strspn - Entry point
* @s:function that get length of a prefix substring
* @accept: prefix substring
* Print with _putchar
* Return: a pointer to the memory s which consits only of bytes from accept
**/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	f ((*s = NULL) || (*accept = NULL))
		return len;
	while (*s && strchr(accept, *s++))
	{
		len++;
	}
	return s;
}
