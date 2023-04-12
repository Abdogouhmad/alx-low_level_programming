#include "main.h"
#include <stdlib.h>
/*by div-styl*/
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: the free of that 2d grid
 * @height: the free the height
*/
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
	{
		free(grid[i]);
	}
free(grid);
}
