#include "main.h"

/**
* **alloc_grid - check code
* @width: dimensions of arrays
* @height: dimensional arrays of intergers
* Return: if 0 return NULL
**/
int **alloc_grid(int width, int height)
{
	int i, j, b, k;
	int **s;

	if (width <= 0 || height <= 0)
		return (NULL);
	s = malloc(height * sizeof(int *));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		s[i] = malloc(width * sizeof(int));
		if (s[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(s[i]);
			}
			free(s);
				return (NULL);
			}
		}
		for (k = 0; k < height; k++)
		{
		for (b = 0; b < width; b++)
			s[k][b] = 0;
		}
	return (s);
}
