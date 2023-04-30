#include "lists.h"
/*by div-styl*/
/**
 * free_listint2 - free a list
 * @head:  pointer to list
 * Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *tmpo;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmpo = (*head)->next;
		free(*head);
		*head = tmpo;
	}
}
