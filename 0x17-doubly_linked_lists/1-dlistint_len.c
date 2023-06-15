#include "lists.h"
/**
* dlistint_len - func print the length of dolist
* @h: list to be checked
* Return: the length of list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t dlist_len = 0;

	while(h != NULL)
	{
		dlist_len += 1;
		h = h->next;
	}
	return (dlist_len);
}

