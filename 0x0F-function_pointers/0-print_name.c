#include "function_pointers.h"

/**
* print_name - check code
* @name: print name
* @f: function that print a name
* print with putchar alwas
* Return: 0 always
**/
void print_name(char *name, void (*f)(char *))
{
	void (*nameprint)(char *) = f;

	nameprint(name);
}
