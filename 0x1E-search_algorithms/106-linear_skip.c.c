#include "search_algos.h"

/**
 * linear_search - Searches for a value in a sorted array of integers
 * using the linear search algorithm
 * @list: array to search in
 * @value: size of array
 *
 *
 * Return: first index where value is located
 * Description: Linear search algorithm
 */
skiplist_t *linear_search(skiplist_t *list, int value)
{
	skiplist_t *node, *jump;

	if (!list)
		return (NULL);

	for (node = jump = list; jump->next && jump->next != NULL && jump->n < value;)
	{
		node = jump;

		if (jump->express != NULL)
		{
			jump = jump->express;
			printf("Value checked array[%ld] = [%d]\n",
				   jump->index, jump->n);
		}
		else
		{
			while (jump->next != NULL)
			{
				jump = jump->next;
			}
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
		   node->index, jump->index);
	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked array[%ld] = [%d]\n", node->index, node->n);
	printf("Value checked array[%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
