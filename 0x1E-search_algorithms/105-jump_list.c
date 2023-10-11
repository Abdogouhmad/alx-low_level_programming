#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted array of integers
 * using the jump search algorithm
 * @list: a pointer to the head of the list
 * @size: size of array
 * @value: value to search for
 *
 * Return: first index where value is located
 * Description: Jump search algorithm
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_size;
	listint_t *node, *jump;

	if (!list || size == 0)
		return (NULL);

	step = 0;
	step_size = sqrt(size);

	for (node = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		node = jump;
		for (step += step_size; jump->index < step; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked array[%lu] = [%d]\n", jump->index, jump->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
		   node->index, jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
