#include "main.h"

/**
* *main - check code
* @argv:arguements
* @argc: size of length
* Return: 0 always
* */
int main(int argc, char *argv[])
{
	int coins[] =(25, 10, 5, 2, 1);
	int amount = atoi(argv[1]);

	if (argc > 1 )
	{
		printf("%d\n", mycombos(&amount, coins, 0));
	}
	else
		printf("Error\n");
}
