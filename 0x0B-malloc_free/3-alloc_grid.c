#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/*by div-styl*/
/**
 * alloc_grid -a function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: is the colume
 * @height: is the row
 * Return: the grid
*/
int **alloc_grid(int width, int height)
{
	int r = 0, c = 0;
	int **art;

	if (width <= 0 || height <= 0)
		return (NULL);

	art = (int **)malloc(height * sizeof(int *));
	if (art == NULL)
	{
	return (NULL);
	}

	for (; r < height; r++)
	{
		art[r] = (int *)malloc(width * sizeof(int));
		if (art[r] == NULL)
		return (NULL);

		for (; c < width; c++)
		{
			art[r][c] = 0;
		}
	}
	return (art);
}
