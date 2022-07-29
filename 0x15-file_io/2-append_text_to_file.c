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

