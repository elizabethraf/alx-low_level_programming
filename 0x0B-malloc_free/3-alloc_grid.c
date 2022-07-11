#include "main.h"

/**
* **alloc_grid - check code
* @width: dimensions of arrays
* @height: dimensional arrays of intergers
* Return: if 0 return NULL
**/
int **alloc_grid(int width, int height)
{
	int i, l, k, a;
	int **s;
	s = malloc(height * sizeof(int *));
	if (width <= 0 || height <= 0)
		return (NULL);
	s = malloc(height * sizeof(int *))
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0, i < height; i++)
	{
		s[i] = malloc(width * sizeof(int));
		if (s[i] == NULL)
		{
			for (l = i ; l > 0; l--)
			{
				free(s[l]);
			}
		free(s);
		return (NULL);
			}
		}
		for (k = 0; k < height; k++)
		{
			for (a = 0; a < width; a++)
				s[k][a] = 0;
		}
		return (s);
}
