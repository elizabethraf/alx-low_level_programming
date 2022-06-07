#include "main.h"

/**
* print_alphabet - print text
* Makes sure we print using putchar
**/
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar (ch);
	putchar('\n');
}
