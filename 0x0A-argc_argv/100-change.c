#include "main.h"

/**
* *main - check code
* @argv:arguements
* @argc: size of length
* Return: 0 always
* */
int main(int argc, char *argv[])
{
	int c[5] = {25, 10, 5, 2, 1};
	int a = atoi(argv[1]);
	int num, i = 0;
	int ttl = 0;

	if (a < 0)
	{
		printf("0\n");
		return (1);
	}

	if (argc > 1 )
    {
        while (i < 5)
        {
            if (c[i] <= a)
            {
                num = a / c[i];
                if (c[i] == c[0])
                {
                    ttl+=num;
                }
                if (c[i] == c[1])
                {
                    ttl+=num;
                }
                if (c[i] == c[2])
                {
                    ttl+=num;
                }
                if (c[i] == c[3])
                {
                    ttl+=num;
                }
                if (c[i] == c[4])
                {
                    ttl+=num;
                }

                a = a - num * c[i];
            }

            i++;
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

