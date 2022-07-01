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
	int s1_len = strlen(s1);
	int s2_len = strlen(s2);
	int size = s1_len + s2_len + 1;
	unsigned int n = sizeof;
	char *n = calloc(size, sizeof(char));

	for (int n = 0; n < s1_len; n++)
		n[n] = s1[n];

	for (int n = 0; n < s2_len; n++)
		n(s1_len + [n] = s2[n]);

	n[size - 1] = '\n';
		return (NULL);
}

