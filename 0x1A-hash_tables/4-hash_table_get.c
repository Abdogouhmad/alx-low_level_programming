#include "hash_tables.h"
/**
 * hash_table_get - get the value of the key
 * @ht: the hash table
 * @key: the key that its value to be returned
 * Return: the value or null if the key not exists
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *current = ht->array[index];

	if (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
