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
	int nb1, nb2;
	char *operto;

	if (argcount < 4 || argcount > 4)
	{
		ERP;
		exit(98);
	}

	operto = argv[2];
	nb1 = atoi(argv[1]);
	nb2 = atoi(argv[3]);

	if ((*operto == '%' && nb2 == 0)  || (*operto == '/' && nb2 == 0))
	{
		ERP;
		exit (100);
	}

	if ( get_op_func(operto) == NULL)
	{
		ERP;
		exit (99);
	}
	else
	{
		printf("%d\n", get_op_func(operto)(nb1,nb2));
	}


	return (0);
}

