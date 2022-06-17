#include "main.h"

/**
* _strcmp - Entry point
* @*s1:compare two strings
* @*s2:compare two strings
* Print with _putchar
* Return: same if they are the same or else not the same
**/
int _strcmp(char *s1, char *s2)
{
	int l  = strlen(s1);
	int r = strlen(s2);
	int i;
	int cnt = 0;

	if (l == r)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			if(s1[i] == s2[i])
				cnt++;
		}
		return (i - cnt);
	}
	else
		return (l - r);
}

