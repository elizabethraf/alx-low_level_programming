#include "main.h"

int read_cpfile(const char *filename, const char *fileto)
{
	int file_from, file_to, reading, writing;
	char *letters;
	int len;

	file_from = open(filename, O_RDONLY);

	if (file_from == -1)
	{
		close(file_from);
		exit (98);
	}

	len = 0;
	while (fgetc(file_from) !=EOF )
	{
		len++;
	}

	letters = malloc(sizeof(char) * len + 1);
	if (letters == NULL)
		exit (98);

	reading = read(filename, letters, len);
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

}





/**
* 
*
**/
int main(int argc, char *argv)
{

    if (argc != 3)
    {
        dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
        exit(97);
    }



	if (argc == NULL || argv == 0)
		return (0);

	reading = readwrite_cpfile(argv[1], argv[2]);
	
	len = malloc(sizeof(char) * letters + 1);
	if (len == NULL)
		return (0);


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

#include "main.h"

/**
* append_text_to_file - function that appends text
* @filename: check point file
* @text_content: appends text
* Return: 1 on success and -1 on failure
**/
int append_text_to_file(const char *filename, char *text_content)
{
	int pr, len;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	pr = open(filename, O_WRONLY | O_APPEND);

	if (pr == 2)
	{
		close(pr);
		return (-1);
	}

	len = write(pr, text_content, strlen(text_content));
	if (len == -1 || len == 13)
	{
		close(pr);
		return (-1);
	}

	close(pr);
	return (1);
}

