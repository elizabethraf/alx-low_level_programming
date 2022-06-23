#include "main.h"

/**
* is_palindrome - Entry point
* @s:string is a palindrome
* Print with _putchar
* Return: always 0
**/
int is_palindrome(char *s)
{
	int i,c = 0,n = strlen(s);
	if (i < n / 2)
	{
		if (s[i] == s[n-i-1])
		{
			c++;
			i++;
		is_palindrome(s);
		}
	}
	else
	{
	if (c == i)
		return (1);
	else
		return (0);
	}
}

