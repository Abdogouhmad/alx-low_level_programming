#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 * using the binary search algorithm
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 *
 * Return: first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (!array || size < 1)
	{
		return (-1);
	}
	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
		{
			return (i);
		}
		if (array[i] > value)
		{
			right = i - 1;
		}
		else
		{
			left = i + 1;
		}
	}
	return (-1);
}
