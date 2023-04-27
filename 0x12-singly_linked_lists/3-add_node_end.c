#include "lists.h"
/*BY DIV-STYL*/
/**
 * add_node_end - unction that adds a new node at
 * the end of a list_t list.
 * @head: pointer to the head of the list
 * @str:  string to be added to the list
 * Return: the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *another_one;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	another_one = *head;
	while (another_one->next != NULL)
		another_one = another_one->next;
	another_one->next = new_node;
	return (new_node);
}
