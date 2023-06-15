#include "lists.h"
/**
* get_dnodeint_at_index -  a function that returns the nth node
* @head: the head of the lists
* @index: the position of the node
* Return: NULL or index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *position = head;
	size_t cnt = 0;

	while (position != NULL)
	{
		if (cnt == index)
			return (position);
		cnt++;
		position = position->next;
	}
	return (NULL);
}
