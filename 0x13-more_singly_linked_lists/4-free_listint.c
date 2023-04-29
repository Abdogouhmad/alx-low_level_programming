#include "lists.h"
/*by div-styl*/
/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the list.
 * Return: void.
*/
void free_listint(listint_t *head)
{
	listint_t *free_it;

	while (head != NULL)
	{
		free_it = head;
		head = head->next;
		free(free_it);
	}
}
