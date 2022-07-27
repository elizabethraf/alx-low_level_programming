
#include<stdio.h>

/**
* main - Entry point
* check is the rand n is negative or positive,
* or zero and print accord
* Return: Always (0) (Success)
**/
int main(void)
{
	int ch;
	int a;

	for (ch = 48; ch <= 57; ch++)
	{
		for (a = 49; a <= 57; a++)
		{
			if (a > ch)
			{
				putchar(ch);
				putchar(a);
				if (ch != 56 || ch != 57)
				{
					putchar(32);
					putchar(44);
				}
			}
		}
	}

	putchar(10);

	return (0);
}
