#include "lists.h"
/*by div-styl*/
/**
 * delete_nodeint_at_index - delete node at index
 * @head: pointer to head
 * @index: index to delete
 * Return: 1 if success, -1 if fail
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *crtnode = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head  = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1 && crtnode->next != NULL)
	{
		crtnode = crtnode->next;
		i++;
	}
	if (i <  index - 1 || crtnode->next == NULL)
		return (-1);
	temp = crtnode->next;
	crtnode->next = temp->next;
	free(temp);
	return (1);
}
