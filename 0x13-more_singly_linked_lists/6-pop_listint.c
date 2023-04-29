#include "lists.h"
/*by div-styl*/
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the head of the list
 * Return: the head node’s data (n).
*/
int pop_listint(listint_t **head)
{
	int dta;
	listint_t *tempo = *head;

	if (tempo == NULL)
		return (0);
	*head = tempo->next;
	dta = tempo->n;
	free(tempo);
	return (dta);
}
