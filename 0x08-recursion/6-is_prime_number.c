#include "main.h"

/**
* is_prime_number - Entry point
* @n:input prime number
* Print with _putchar
* Return: 1 if input integer is prime number and 0 otherwise
**/
int is_prime_number(int n)
{
	if (n <= 2)
	return (n == 2) ? (1) : (0);

	if ((n %2) == 0)
		return (0);
	if ((2 * 2) > n)
		return (1);

	is_prime_number(n + 1);
	return (0);
}
