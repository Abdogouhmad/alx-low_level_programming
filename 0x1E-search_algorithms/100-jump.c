#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using the jump search algorithm
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 *
 * Return: first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jmp, step;

	if (!array || size < 1)
	{
		return (-1);
	}

	step = sqrt(size);

	for (i = jmp = 0; jmp < size && array[jmp] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jmp, array[jmp]);
		i = jmp;
		jmp += step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i, jmp);

	jmp = jmp < size - 1 ? jmp : size - 1;

	for (; i < jmp && array[i] < value; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
