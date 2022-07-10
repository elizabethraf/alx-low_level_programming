#include "main.h"

/**
* *str_concat - Entry point
* @s1:concatenates strings
* @s2:concatenates strings
* Print with _putchar
* Return: null on failure
**/
char *str_concat(char *s1, char *s2)
{
	int i = 0, a = 0, b = 0, k = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if  (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[a])
		a++;
	b = i + a;
	s = (char *)malloc(b * sizeof(char) + 1);
	a = 0;
	if (s == NULL)
		return (NULL);
	k = 0;
	while (k < b)
	{
		if (k < i)
			s[k] = s1[k];
		if (k >= i)
		{
			s[k] =  s2[a];
			a++;
		}
		k++;
	}
	s[k] = '\0';
		return (s);
}
