#include "main.h"

int readwrite_cpfile(const char *filename, const char *fileto)
{
	int file_from, file_to, reading, b;
	char *letters;
	int len = 1024;

	file_from = open(filename, O_RDONLY);

	if (file_from == -1)
	{
		close(file_from);
		exit (98);
	}

	letters = malloc(sizeof(char) * len + 1);
	if (letters == NULL)
		exit (98);

	reading = read(file_from, letters, len);
	if (reading == -1)
	{
		free(letters);
		close(file_from);
		exit (99);
	}

	file_to = open(fileto, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1 || file_to == EACCES)
	{
		free(letters);
		close(file_from);
		close(file_to);
		exit (99);
	}

	b = write(file_to, letters, len);

	free(letters);
	close(file_from);
	close(file_to);

	if (b > 0)
		return (b);
	else 
		return (98);

}



/**
* 
*
**/
int main(int argc, const char **argv)
{

    if (argc != 3)
    {
        dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
        exit(97);
    }

	readwrite_cpfile(argv[1], argv[2]);

	return (0);
}
