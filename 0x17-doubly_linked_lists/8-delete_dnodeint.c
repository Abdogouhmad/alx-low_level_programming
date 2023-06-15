#include "lists.h"
/**
* delete_dnodeint_at_index - delete node
* @head: the head of the list
* @index: the index of the node
* Return: 1 succeeded or -1 if not
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *nd = *head;
	dlistint_t *dl = NULL;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = nd->next;
		if (nd->next != NULL)
			nd->next->prev = NULL;
		free(nd);
		return (1);
	}
	for (; index > 0 ; index--)
	{
		if (nd == NULL)
			return (-1);
		dl = nd;
		nd = nd->next;
	}
	dl->next = nd->next;
	if (nd->next != NULL)
		nd->next->prev = dl;
	free(nd);
	return (1);
}
