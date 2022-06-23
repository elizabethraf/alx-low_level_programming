#include "main.h"

/**
* is_palindrome - Entry point
* @s:string is a palindrome
* Print with _putchar
* Return: always 0
**/
int is_palindrome(char *s)
{
	if (s == 0)
		return (1);
	if (s != 0)
		return (0);

	if (s != '\n')
		return is_palindrome(s + 1);
	return (1);
}

