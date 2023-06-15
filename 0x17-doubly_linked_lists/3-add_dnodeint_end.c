#include "lists.h"
/**
* add_dnodeint_end - add a number at the end of the lists
* @head: the head of the lists
* @n: the number to be add_end
* Return: The numbers
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *add_end = malloc(sizeof(dlistint_t));

	if (add_end == NULL)
		return (NULL);

	add_end->n = n;
	add_end->prev = NULL;
	add_end->next = NULL;

	if (*head == NULL)
	{
		*head = add_end;
	}
	else
	{
		dlistint_t *new = *head;

		while (new->next != NULL)
			new = new->next;

		new->next = add_end;
		add_end->prev = new;
	}
	return (add_end);
}
