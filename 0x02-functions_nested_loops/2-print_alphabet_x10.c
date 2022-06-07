#include "main.h"

/**
* print_alphabet - print text
* Makes sure we print using putchar
**/
void print_alphabet_x10(void)
{
	int ch, k;

	for (k = 0; k <= 10; k++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			putchar (ch);
		putchar('\n');
	}
}
