#include "main.h"

/**
* *_strdup - Entry point
* @str:return a duplicated pointer
* Print with _putchar
* Return:NULL if str = NULL
**/
char *_strdup(char *str)
{
	char *k;
	int i = 1;
	int b = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;
	k = (char *)malloc(i * sizeof(char) + 1);

	if (k == NULL)
		return (NULL);

	while (b < i)
	{
		k[b] = str[b];
		b++;
	}
	k[b] = '\0';
		return (k);
}
