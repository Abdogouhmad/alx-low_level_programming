#include "lists.h"
/*BY DIV_STYL*/
/**
 * free_list - frees a list
 * @head: head of the linked list that should be freed
 * Return: void
*/
void free_list(list_t *head)
{
	list_t *freedom;

	while (head)
	{
		freedom = head;
		head = head->next;
		free(freedom->str);
		free(freedom);
	}
}
/*BY DIV_STYL*/
