#include "main.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
* betty style doc for function main goes there */
/**
* main - Entry point
* check is the rand n is negative or positive,
* or zero and print accordingly
* Return: Always (0) (Success)
**/
void positive_or_negative(int i)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is positive\n", n);
	return (void);
}

#include "main.h"

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
