#include "main.h"

/**
* _strcmp - Entry point
* @s1:compare two strings
* @s2:compare two strings
* 
* Return: same if they are the same or else not the same
**/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			break;
		}

		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
