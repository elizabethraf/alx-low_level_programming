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
	int error, isnumber;

	ttl = 0;
	error = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (isnumber = 0; argv[i][isnumber]; isnumber++)
			{
				if (__builtin_types_compatible_p(typeof(atoi(argv[i][isnumber])), typeof(int)))
					ttl += atoi(argv[i]);
				else
					error++;
			}
		}
	}

	if ( error < 1)
	{
		printf("%d\n", ttl);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
