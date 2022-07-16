#include "main.h"

/**
* main - Entry point
* Check is the rand n is negative or positive
* or zero and print accordingly
* Return: always 0 successful
**/
int main(void)
{
	int n;
	srand(time(0));
	if (n < 0)
		printf ("%d is negative\n", n);
	else if (n == 0)
		printf ("%d is zero\n", n);
	else 
		printf ("%d is positve\n",n);
	return (0);
}
