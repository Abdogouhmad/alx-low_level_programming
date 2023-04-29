#include "lists.h"
/*by div-styl*/
/**
 * free_listint2 - free a list
 * @head:  pointer to list
 * Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *tmpo = *head, *next;

	if (head == NULL)
		return;

	while (tmpo != NULL)
	{
		next = tmpo->next;
		free(tmpo);
		tmpo = next;
	}
		*head = NULL;
}
