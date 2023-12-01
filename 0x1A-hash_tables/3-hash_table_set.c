#include "hash_tables.h"

/**
 * hash_table_set - sets value on a specific
 * position based on the key mapped
 *
 * @ht: the hash table
 * @key: key for the hash map
 * @value: value to be stored in the array
 *
 * Return: status
 *
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));
	unsigned int index;

	if (node == NULL)
	return (0);
	if (key == NULL || ht == NULL)
	{
		free(node);
		return (0);
	}
	node->key = malloc((sizeof(char) * strlen(key)) + 1);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = malloc((sizeof(char) * strlen(value)) + 1);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (0);
	}
	node->next = NULL;

	strcpy(node->key, key);
	strcpy(node->value, value);
	index = key_index((unsigned char *)key, ht->size);

	add_at_head(ht, node, index);
	return (1);
}

/**
 * add_at_head - add node at head of linked list
 *
 * @table: the hash table
 * @element: node of a linked list
 * @index: the place where the list is
 *
 * Return: nothing
 *
*/

void add_at_head(hash_table_t *table, hash_node_t *element, unsigned int index)
{
	hash_node_t *temp = table->array[index], *prev = NULL;

	while (temp != NULL)
	{
		if (strcmp(temp->key, element->key) == 0)
		{
			if (prev != NULL)
			prev->next = element;
			else
			table->array[index] = element;
			element->next = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			return;
		}
		prev = temp;
		temp = temp->next;
	}

	if (table->array[index] == NULL)
	{
		table->array[index] = element;
	}
	else
	{
		element->next = table->array[index];
		table->array[index] = element;
	}
}
