#include "lists.h"
/**
* add_dnodeint - add nmber to dlist
* @head: the head lists
* @n: the number to be added
* Return: the list
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add_n =  malloc(sizeof(dlistint_t));

	if (add_n == NULL)
		return (NULL);

	add_n->n = n;
	add_n->next = *head;
	add_n->prev = NULL;

	if (*head != NULL)
		(*head)->prev = add_n;

	*head = add_n;
	return (add_n);
}
