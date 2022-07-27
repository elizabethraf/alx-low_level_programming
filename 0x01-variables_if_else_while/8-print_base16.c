#include<stdio.h>

/**
* main - Entry point
* Hexadecimal
* 1 2 3 4 5 5 6 7 8 9 a b c d e f
* or zero and print accordingly
* Return: Always (0) (Success)
**/
int main(void)
{
	int a;
	char ch;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}

	putchar(10);

	return (0);
}
