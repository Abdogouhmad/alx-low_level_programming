#include "lists.h"
/*by div-styl*/
/**
 * free_listint2 - free a list
 * @head:  pointer to list
 * Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *tmpo = *head;

	if (head == NULL)
		return;

	while (tmpo != NULL)
	{
		tmpo = tmpo->next;
		free(tmpo);
		*head = tmpo;
	}
		*head = NULL;
}
