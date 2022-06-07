#include "main.h"

/**
 * main - Entry point
 *  check is the rand n is negative or positive,
 *  or zero and print accordingly
 *  Return: Always (0) (Success)
 **/

int main(void)
{
	print_puts();
	return (0);
}

void print_puts(void)
{
        int ch, i;
        char myput[] = "_putchar";
        for ( i = 0; i < 8; i++)
        {
                ch = (int) myput[i];
                _putchar(ch);
        }
        _putchar('\n');
}

