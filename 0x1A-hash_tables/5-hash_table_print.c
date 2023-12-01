#include "hash_tables.h"

/**
 * hash_table_print - prints the key with the value in the map
 *
 * @ht: the hash table
 *
 * Return: nothing
 *
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **current = ht->array, *temp = NULL;
	unsigned int i = 0, check_first = 0;

	if (ht == NULL)
	return;

	while (i < ht->size)
	{
		if (i == 0)
		printf("{");
		if (current[i] != NULL)
		{
			temp = current[i];

			while (temp != NULL)
			{
				if (check_first)
				printf(", ");
				printf("'%s': '%s'", temp->key, temp->value);
				temp = temp->next;
				check_first = 1;
			}
		}
		i++;
		if (i == ht->size)
		printf("}\n");
	}
}
