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
	int count;

	printf("argc = %d\n", argc);
	printf("This program was called with\nargv[0]: %s\n", argv[0]);

	if (argc > 1)
	{
	for (count = 1; count < argc; count++)
	printf("argv[%d] = %s\n", count, argv[count]);
	}
	return (0);
}

