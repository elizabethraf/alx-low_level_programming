#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
#include "main.h"

/* betty style doc for function main goes there */
/**
* main - Entry point
* check is the rand n is negative or positive,
* or zero and print accordingly
* Return: Always (0) (Success)
**/
void positive_or_negative(int i)
{

	/* your code goes there */
	if (i < 0)
		printf("%d is negative\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is positive\n", i);
}
