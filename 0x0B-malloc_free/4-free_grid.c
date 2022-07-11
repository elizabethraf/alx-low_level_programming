#include "main.h"

/**
* free_grid - Entry point
* @grid: free a dimensional grid
* @height: grid function
* Print with _putchar
* Return: always 0
**/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free((grid)[i]);
	 free(grid);
}
