#include "main.h"

/**
* main - check code
* @argc: print
* @argv: number
* Return: always 0
**/
int main(int argc, char *argv[])
{

	(void)argc;

	if (argc > 1)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
