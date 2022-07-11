#include "main.h"

/**
  * exiterror - print error and exit
  *
  * Exit: exits 98
**/
void exiterror(void)
{
	printf("Error\n");
	exit (98);
}

int _isdigit(char *s, int cnt)
{
	int *p;
	int c;
	n = 1;

	while (n < cnt)
	{
		if (s < '0' || s > '9')
		n++;
	}

}

/**
* _main - Entry point
* @argc: number of arguments
* @argv: array of arguments
* Print with _putchar
* Return: 98 if error or 0 if all is well
**/
int main(int argc, char *argv[])
{
	int *num1;
	int *num2;
	unsigned int arg1_len;
	unsigned int arg2_len;

	if (argc == 3)
	{
		arg1_len = strlen(argv[1]);
		arg2_len = strlen(argv[2]);
		if (_isdigit(argv[1], arg1_len) && _isdigit(argv[2], arg2_len) )
		{
			calprint(argv[1], argv[2]);
			return (0);
		}
		else
			exiterror;
	}
	else
		exiterror;

	return 0;
}
