#include "lists.h"
/**
 * list_len - returns the number of elements in a
 * linked list_t list.
 * @h: singly linked list.
 * Return: number of elements in a linked list_t list.
*/
/*BY DIV-STYL*/
size_t list_len(const list_t *h)
{
	size_t linked_list_len = 0;

	while (h != NULL)
	{
		linked_list_len += 1;
		h = h->next;
	}
	return (linked_list_len);
}
