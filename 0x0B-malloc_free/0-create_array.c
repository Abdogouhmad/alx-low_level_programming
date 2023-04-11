#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/*by div-styl*/
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of the arry and malloc
 * @c: the return value
 * Return: the c value.
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *matrix;

	if (size == 0)
	{
		return (NULL);
	}
	matrix = (char *) malloc(size * sizeof(char));

	if (matrix == NULL)
	{
		return (NULL);
	}

	for (; i < size; i++)
	{
		matrix[i] = c;
	}
return (matrix);
}
