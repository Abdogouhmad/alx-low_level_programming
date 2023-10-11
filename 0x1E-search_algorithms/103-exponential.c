#include "search_algos.h"


/**
 * _helper - Searches for a value in a sorted array of integers
 * using the binary search algorithm
 * @array: array to search in
 * @left: left bound
 * @right: right bound
 * @value: value to search for
 *
 * Return: first index where value is located
*/
int _helper(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (!array)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		i = (left + right) / 2;
		if (array[i] == value)
			return (i);
		else if (array[i] < value)
			left = i + 1;
		else
			right = i - 1;
	}
	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the exponential search algorithm
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 *
 * Return: first index where value is located
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, r;

	if (!array)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		}
	}
	r = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, r);
	return (_helper(array, i / 2, r, value));
}
