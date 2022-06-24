#include "main.h"

/**
* is_palindrome - Entry point
* @s:string is a palindrome
* Print with _putchar
* Return: always 0
**/
int is_palindrome(char *s)
{
	int i;
	int c;
	int n;

	i = 0;
	c = 0;
	n = strlen(s);

	if (i < n / 2)
	{
		if (s[i] == s[n - i - 1])
	{
		c++;
		i++;

		is_palindrome(s + 1);
		return (is_palindrome(s));
	}
	return (1);
	}
	else
	{
	if (c == i)
		return (1);
	else
		return (0);
	}
	return (0);
}

