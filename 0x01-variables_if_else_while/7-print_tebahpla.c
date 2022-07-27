#include <stdio.h>

/**
* main - Entry point
* check is the rand n is negative or positive,
* or zero and print accordingly
* Return: Always (0) (Success)
**/
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}

	putchar(10);

	return (0);
}
