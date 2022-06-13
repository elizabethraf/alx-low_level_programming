#include "main.h"
/**
 * _puts - Entry point
 * @str:address of string to print
 * Return: Always 0
 **/

void rev_string(char *s)
{
	int strl = strlen(s) - 1;
	char p;
	int k;

	for (k = 0; k < strl; k++)
	{
		p = *(s+k);
		*(s+k) = *(s+strl);
		*(s+strl) = p;
		strl--;
	}
}

