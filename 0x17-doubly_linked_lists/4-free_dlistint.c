#include "lists.h"
/**
* free_dlistint - func free the double linked lists
* @head: the head of the lists
* Return: void
*/
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		dlistint_t *coming = head->next;

		free(head);
		head = coming;
	}
}
