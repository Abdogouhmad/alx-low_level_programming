#include "lists.h"
/*by div-styl*/
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to head of list
 * Return: sum of all data in list
*/
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *tempo = head;

	while (tempo != NULL)
	{
		total += tempo->n;
		tempo = tempo->next;
	}
	return (total);
}
