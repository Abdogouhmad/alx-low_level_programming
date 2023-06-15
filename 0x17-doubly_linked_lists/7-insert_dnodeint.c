#include "lists.h"
/**
* insert_dnodeint_at_index - insert a node at given position
* @h: the head
* @idx: the index
* @n: the number
* Return: the number
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_int = malloc(sizeof(dlistint_t));
	dlistint_t *c;
	size_t cnt;

	if (h == NULL)
		return (NULL);

	if (new_int == NULL)
		return (NULL);

	new_int->n = n;
	new_int->prev = NULL;
	new_int->next = NULL;
	if (idx == 0)
	{
		new_int->next = *h;
		if (*h != NULL)
			(*h)->prev = new_int;
		*h = new_int;
		return (new_int);
	}
	c = *h;
	cnt = 0;

	while (c != NULL && cnt < idx - 1)
	{
		c = c->next;
		cnt++;
	}
	if (c == NULL)
	{
		free(new_int);
		return (NULL);
	}
	new_int->next = c->next;
	new_int->prev = c;
	if (c->next != NULL)
		c->next->prev = new_int;
	c->next = new_int;
	return (new_int);
}

