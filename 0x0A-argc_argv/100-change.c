#include "main.h"

/**
* *main - check code
* @argv:arguements
* @argc: size of length
* Return: 0 always
* */
int main(int argc, char *argv[])
{
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc > 1 )
	{
		printf("%d\n", mycombos(atoi(argv[1]), coins, 0));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
