#include "hash_tables.h"

/**
 * hash_table_delete - free's a table
 *
 * @ht: the hash table
 *
 * Return: nothing
 *
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;

	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		free_list(ht->array[i]);
		i++;
	}
	free(ht->array);
	free(ht);
	ht = NULL;
}

/**
 * free_list - free a liked list
 *
 * @head: head of a linked list
 *
 * Return: nothing
 *
*/

void free_list(hash_node_t *head)
{
	hash_node_t *current = head;

	while (head != NULL)
	{
		current = head->next;
		free(head->key);
		free(head->value);
		free(head);
		head = current;
	}
}
