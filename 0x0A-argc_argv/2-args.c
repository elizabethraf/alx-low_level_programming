#include "main.h"

/**
* main - Entry point
* @argc:all arguement printed
* @argv: arguement printed
* Print with _putchar
* Return: Always 0
**/
int main(int argc, char *argv[])
{
	while (argc--)
	printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);

	return (0);
}

