#include "main.h"

/**
* is_prime_number - Entry point
* @n:input prime number
* Print with _putchar
* Return: 1 if input integer is prime number and 0 otherwise
**/
int isPalRec(int n)
{
	if (n <= 2)
	return (n == 2) ? (1) : (0);

	if ((n %2) == 0)
		return (0);
	if ((2 * 2) > n)
		return (1);

	isPalRec(n + 1);
	return (0);
}

int is_prime_number(int n)
{
	int n = 2;

	if (n == 0)
		return (1);
return isPalRec(n - 1);
}

int main()
{
	n = 2;

		if (is_prime_number(n))
			return (0);
}
