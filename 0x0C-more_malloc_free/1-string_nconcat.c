#include "main.h"

/**
* *string_nconcat Entry point
* Print with _putchar
* @s1:function
* @n:concatenate two strings
* @s2:concatenates two strings
* Return: if it fails NULL.
**/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len;
	unsigned int s2_len;
	char *s;
	unsigned int i, len, short_len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s2_len)
	{
		s = malloc((s1_len + s2_len + 1) * sizeof(*s1));
		short_len2 = ((s1_len + s2_len + 1) * sizeof(*s1));
	}
	else
	{
		s = malloc((strlen(s1) + n + 1) * sizeof(*s1));
		short_len2 = ((n + 1) * sizeof(*s1));
	}

	if (s == NULL)
		return (NULL);
	len = 0;
	for (i = 0; i < s1_len; i++)
		s[len++] = s1[i];

	for (i = 0; i < short_len2; i++)
		s[len++] = s2[i];

	s[len] = '\0';

	return (s);
}

