#include "lists.h"
/**
* delete_dnodeint_at_index - delete node
* @head: the head of the list
* @index: the index of the node
* Return: 1 succeeded or -1 if not
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *nd = *head, *deletion;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(nd);
		return (1);
	}
	while (nd != NULL && i < index - 1)
	{
		nd = nd->next;
		i++;
	}
	if (nd != NULL)
		return (-1);
    deletion = nd->next;
    nd->next = deletion->next;
if (deletion->next != NULL)
    deletion->next->prev = nd;
  free(deletion);
	return (1);
}

