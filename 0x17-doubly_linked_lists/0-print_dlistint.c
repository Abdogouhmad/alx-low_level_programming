#include "lists.h"
/**
 * print_dlistint - print the elements of the dlistint_t
 * @h: the elements to printed
 *  Return: the number of elements
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		cnt++;
	}
	return (cnt);
}
