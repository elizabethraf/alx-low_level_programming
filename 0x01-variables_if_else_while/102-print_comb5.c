#include<stdio.h>

/**
* main - Entry point
* different combinations of three digits.
* Return: Always (0) (Success)
**/
int main(void)
{
	int ch;
	int a;

	for (ch = 48; ch <= 57; ch++)
	{
	for (a = 48; a <= 57; a++)
	{
		putchar(ch);
		putchar(a);

		if (ch != 57 || a != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	}
	putchar('\n');

	return (0);
}
