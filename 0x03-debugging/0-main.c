#include "main.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

void positive_or_negative(int i)
{
	i = n;
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is positive\n", n);
	return (0);
}

/**
* main - check the code
*
* Return: 0
**/
int main(void)
{
	int i;

	i = 0;
	positive_or_negative(i);

	return (0);
}
