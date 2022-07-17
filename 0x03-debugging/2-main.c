#include <stdio.h>
#include "main.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*  @a: intergers
* @b: intergers
* @c: intergers
* @largest_number: count intergers
*/
int largest_number(int a, int b, int c)
{
	a = 972;
	b = -98;
	c = 0;
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
        largest = b;
    }
	else
	{
		largest = c;
	}

	return (largest);
}

int main(void)
{
	int i;

	i = 98;
	positive_or_negative(i);

	return (0);
}

int main(void)
{
	int a, b, c;
	int largest;

	a = 0;
	b = 0;
	c = 0;
	largest = largest_number(a, b, c);

	printf("%d is the largest number\n", largest);

	return (0);
}
