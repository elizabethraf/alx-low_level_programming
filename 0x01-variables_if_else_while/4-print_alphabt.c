/**
* main - Entry point
* check is the rand n is negative or positive,
* or zero and print accordingly
* Return: Always (0) (Success)
**/
#include<stdio.h>
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}

	putchar(10);

	return (0);
}

