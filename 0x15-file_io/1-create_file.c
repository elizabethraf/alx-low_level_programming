#include "main.h"

/**
* create_file - check code
* @filename: function that creates file
* @text_content: creating files
* Return: if filename is NULL return -1
**/
int create_file(const char *filename, char *text_content)
{
	int a, b;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	a = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (a == -1)
		return (-1);
	b = write(a, text_content, strlen(text_content));
	if (b > 0)
		return (1);

	close(a);
	return (1);
}
