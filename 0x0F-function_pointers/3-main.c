#include "3-calc.h"

/**
* main - print the num of args you passed to it
* @argc: argument count
* @argv: argument vector, array of strings
* Return: 0 if all is well, exits with numbers 
**/
int main(int argc, char *argv[])
{
	int argcount = argc;
	char *operto = argv[2];
	int nb1 = atoi(argv[1]);
	int nb2 = atoi(argv[3]);

	if (argcount < 4 || argcount > 4)
	{
		ERP;
		exit(98);
	}

	if ((*operto == '%' && nb2 == 0)  || (*operto == '/' && nb1 == 0))
	{
		ERP;
		exit(100);
	}


	return (0);
}

