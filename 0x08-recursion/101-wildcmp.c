#include "main.h"

/**
* wildcmp- Entry point
* @s1:compares two strings
* @s2: comparestwo strings
* Print with _putchar
* Return: 0 always
**/
int _wildcmp(char *s1, char *s2)
{
	if ( s1 	== NULL || 	s2 == NULL)
		return (0);
	if (s1  == s2)
		return (1);

	if ((s1[0]) == (s2[0] && (s1[0]) == ((s1 + 1[0]))
	_wildcmp(s1, ++s2);

	else
	if ((s1[0] == (s2[0]) && (s2[0]) == ((s1 + 1) [0]))
		_wildcmp(++s1; s2);
	else
	if ((s1[0]) == (s2[0]))
		_wildcmp(++s1; ++s2);

	else
		return (1);
}
