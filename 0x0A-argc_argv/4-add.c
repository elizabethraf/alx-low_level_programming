#include "main.h"

/**
* main - check code
* @argc: print
* @argv: number
* Return: always 0
**/
int main(int argc, char *argv[])
{
	int i, ttl;

	ttl = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!(atoi(argv[i])))
				ttl += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", ttl);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
