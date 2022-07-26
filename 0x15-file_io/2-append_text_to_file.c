#include "main.h"

/**
* append_text_to_file - check point
* @filename: function that appends text
* @text_content: appends text
* Return: 1 on success and -1 on failure
**/
int append_text_to_file(const char *filename, char *text_content)
{
	int pj, len;

	if (filename == NULL || text_content == NULL)
		return (-1);

	pj = open(filename, O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);
	if (pj == -1)
		return (-1);
	for (len = 0; text_content[len]; len++)
	if (text_content == NULL)
	{
		close(pj);
		return (1);
	}
	else
	{
		pj = write(pj, text_content, strlen(text_content));
	}
	if (pj == -1)
		return (-1);
	close(pj);
	return (1);
}
