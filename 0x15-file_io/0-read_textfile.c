#include "main.h"

/**
* read_textfile - check code
* @filename: standard output
* @letters: file that prints text
* Return: if filename is NULL  return 0
**/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t reading, writing;
	char *len;
	int file;

	if (filename == NULL || letters == 0)
		return (0);

	len = malloc(sizeof(size_t) * letters + 1);
	if (len == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(len);
		return (0);
	}

	reading = read(file, len, letters);
	if (reading == -1)
	{
		free(len);
		close(file);
		return (0);
	}

	writing = write(STDOUT_FILENO, len, reading);
	if ( writing > 0)
	{
		free(len);
		close(file);
		return (0);
	}

	free(len);
	close(file);
	return (writing);
}

