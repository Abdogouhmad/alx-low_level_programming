#include "lists.h"
/**
 * add_node - list of names that should be printed
 * @head: pointer to the list
 * @str: string to be printed
 * Return: the address of the new element, or NULL if it failed
*/
/*BY DIV-STYL*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *THE_NEW_NODE;

	THE_NEW_NODE = malloc(sizeof(list_t));

	if (THE_NEW_NODE == NULL)
		return (NULL);
	THE_NEW_NODE->str = strdup(str);
	if (THE_NEW_NODE->str == NULL)
	{
		free(THE_NEW_NODE);
		return (NULL);
	}
	THE_NEW_NODE->len = strlen(str);
	THE_NEW_NODE->next = *head;
	*head = THE_NEW_NODE;
	return (THE_NEW_NODE);
}
