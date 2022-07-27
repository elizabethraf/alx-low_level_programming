#include "main.h"

/**
* 
*
**/
int main(int argc, char *argv)
{
	int file_from, file_to, reading, writing;
	char *len;
	int file;

	if (argc == NULL || argv == 0)
		return (0);

	len = malloc(sizeof(char) * letters + 1);
	if (len == NULL)
		return (0);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98
	}

	file_to = open(argv, len, letters);
	if (reading == -1)
	{
		free(len);
		close(file);
		return (0);
	}

	writing = write(STDOUT_FILENO, len, reading);
	if (writing == -1)
	{
		free(len);
		close(file);
		return (0);
	}

	free(len);
	close(file);
	return (writing);
}

