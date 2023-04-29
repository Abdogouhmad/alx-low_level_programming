#include "lists.h"
/*by div-styl*/
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to the first element of the list
 * @n: int to set in the new node
 * Return: address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw_node = malloc(sizeof(listint_t)),  *tempo = *head;

	if (nw_node == NULL)
		return (NULL);
	nw_node->n = n;
	nw_node->next = NULL;
	if (*head == NULL)
	{
		*head = nw_node;
		return (nw_node);
	}
	while (tempo->next != NULL)
		tempo = tempo->next;
	tempo->next = nw_node;
	return (nw_node);
}
