#include <stdlib.h>
#include "main.h"
/*div-styl*/
/**
 *array_range -function that creates an array of integers.
 *@min: value 1
 *@max: value 2
 *Return: array
*/
int *array_range(int min, int max)
{
	int i = 0;
	size_t sum = 0;
	int *matrix;

	if (min > max)
		return (NULL);
	sum = (max - min) + 1;

	matrix = (int *) malloc(sum * sizeof(int));

	if (matrix == NULL)
		return (NULL);
	for (i = 0; i < sum; i++)
		matrix[i] = min + i;
	return (matrix);
}

