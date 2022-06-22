#include "main.h"

/**
* *_strpbrk - Entry point
* @s:function that searches string
* @accept:searches any sety of bytes
* Print with _putchar
* Return: a pointer s
**/
char *_strpbrk(char *s, char *accept)
{
	int k;
	int l = strlen(s);

	for (k = 0; k < l; k++)
	{
		if ( s[k] == accept[k])

		{
			return s;

		else

	return (NULL);

}
