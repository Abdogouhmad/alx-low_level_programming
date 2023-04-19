#include "function_pointers.h"
#include <stdio.h>
/*y div-style*/
/**
 * int_index -function that searches for an integer.
 * @array: array
 * @size: size of the array
 * @cmp: compare and search
 * Return: -1 or index
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (; index < size; index++)
	{
		if (cmp(array[index]))
			return (index);
	}
	return (-1);
}
