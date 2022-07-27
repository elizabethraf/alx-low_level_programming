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
	int b;

	for (ch = 48; ch <= 57; ch++)
	{
		for (a = 49; a <= 57; a++)
		{
			for (b = 50; b <= 57; b++)
			{
				if (a > ch && b > a)
				{
					putchar(ch);
					putchar(a);
					putchar(b);
					if (ch < 55)
					{
						putchar(44);
						putchar(32);
					}
				}
			}

		}
	}
	putchar(10);

	return (0);
}
