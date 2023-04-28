#include "lists.h"
/*BY div styl*/
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to the list.
 * Return: number of nodes.
*/
size_t print_listint(const listint_t *h)
{
	size_t  index = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		index++;
	}
	return (index);
}
