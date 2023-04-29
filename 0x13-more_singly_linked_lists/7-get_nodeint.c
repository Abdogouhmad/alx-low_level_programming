#include "lists.h"
/*by div-styl*/
/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index:  index of the node to return
 * Return: pointer to the node we're looking for, or NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *crtnode = head;
	unsigned int i = 0;

	while (crtnode != NULL && i < index)
	{
		crtnode = crtnode->next;
		i++;
	}
	if (crtnode == NULL)
		return (NULL);
	return  (crtnode);
}
