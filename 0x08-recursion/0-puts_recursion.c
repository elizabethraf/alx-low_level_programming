#include "main.h"

/**
* _puts_recursion - Entry point
* @s:function that prints a string
* Print with _putchar
* Return: always 0
**/
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
		_putchar('\n');
}
