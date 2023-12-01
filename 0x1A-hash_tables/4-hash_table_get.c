#include "hash_tables.h"

/**
 * hash_table_get - finds the value based on the key
 *
 * @ht: the hash table
 * @key: key for the hash map
 *
 * Return: nothing
 *
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index = 0;
	hash_node_t *current = ht->array[index];

	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		return (current->value);

		current = current->next;
	}
	return (NULL);
}
