#include "main.h"
/**
 * rev_string - Entry point
 * @s:print reverse
 * Return: Always 0
 * return function to reverse a string
 **/

void rev_string(char *s)
{
	int strl = strlen(s) - 1;
	char p;
	int k;

	for (k = 0; k < strl; k++)
	{
	p = *(s + k);
	*(s + k) = *(s + strl);
	*(s + strl) = p;
	strl--;
	}
}

