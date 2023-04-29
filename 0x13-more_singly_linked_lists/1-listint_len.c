#include "lists.h"
/*BY div-styl*/
/**
 * listint_len - print the number of elements within a list
 * @h: pointer to the list
 * Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
