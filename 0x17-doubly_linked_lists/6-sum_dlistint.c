#include "lists.h"
/**
* sum_dlistint - pritnt the total of the nodes
* @head: the head of dlist
* Return: the total
*/
int sum_dlistint(dlistint_t *head)
{
	size_t total;
	dlistint_t *op = head;

	while (op != NULL)
	{
		total += op->n;
		op = op->next;
	}
	return (total);
}

