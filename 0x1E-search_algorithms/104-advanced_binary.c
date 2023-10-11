#include "search_algos.h"

/**
 * advanced_binary_recurive - Searches for a value in a
 * sorted array of integers
 * using the binary search algorithm
 * @array: array to search in
 * @left: left bound
 * @right: right bound
 * @value: value to search for
 *
 * Return: first index where value is located
 * Description: Recursive version of the binary search algorithm
*/
int advanced_binary_recurive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
	i = (left + right) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recurive(array, left, i - 1, value));
	return (advanced_binary_recurive(array, i + 1, right, value));
}
/**
 * advanced_binary - Searches for a value in a
 * sorted array of integers
 * using the binary search algorithm
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 *
 * Return: first index where value is located
 * Description: Iterative version of the binary search algorithm
*/

int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size < 1)
		return (-1);
	return (advanced_binary_recurive(array, 0, size - 1, value));
}
