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
	int c;

	for (ch = 48; ch <= 57; ch++)
	{
		for (a = 48; a <= 57; a++)
		{
			for (b = 48; b <= 57; b++)
			{
				for (c = 49; c <= 57; c++)
				{
					putchar(ch);
					putchar(a);
					putchar(32);
					if (c == b)
					b++;
					putchar(b);

					if (c > ch)
						c++;

					putchar(c);

					if (ch < 56)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

