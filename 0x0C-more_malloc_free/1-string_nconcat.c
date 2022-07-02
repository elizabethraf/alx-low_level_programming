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
	unsigned int s1_len = strlen(s1);
	unsigned int s2_len = strlen(s2);
	char *s;
	unsigned int i, len;

	if (n >= s2_len)
	{
		s = malloc((s1_len + s2_len + 1) * sizeof(*s1));
		len = ((s1_len + s2_len + 1) * sizeof(*s1));
	}
	else
	{
		s = malloc((strlen(s1) + n + 1) * sizeof(*s1));
		len = ((strlen(s1) + n + 1) * sizeof(*s1));
	}

	if (s == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		s[i] = s1[i];
	for (i = 0; i < s2_len; i++)
		s[s1_len + i] = s2[i];

	s[len - 1] = '\0';

	return (s);
}

