#include "main.h"
#include <stdlib.h>
/*by div-styl*/
/**
 * free_grid - frees a 2 dimensional grid previously created by your alloc_grid function. frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @gird:
 * @height:
 * Return: void
*/
void free_grid(int **grid, int height)
{
    int i = 0;

    for(; i < height; i++)
    {
        free(grid[i]);
    }
free(grid);
}