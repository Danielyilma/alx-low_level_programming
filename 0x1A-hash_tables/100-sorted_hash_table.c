#include "hash_tables.h"

/**
 * shash_table_create - create hash table array
 *
 * @size: size of the hash table
 *
 * Return: hash table pointer
 *
*/

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table = malloc(sizeof(shash_table_t));

	if (table == NULL)
	return (NULL);

	table->size = size;

	table->array = calloc(table->size, sizeof(shash_node_t));
	if (table->array == NULL)
	return (NULL);

	return (table);
}

/**
 * shash_table_set - sets value on a specific
 * position based on the key mapped
 *
 * @ht: the hash table
 * @key: key for the hash map
 * @value: value to be stored in the array
 *
 * Return: status
 *
*/

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node = malloc(sizeof(shash_node_t));
	unsigned int index = 0;

	if (node == NULL)
	return (0);

	if (ht == NULL || key == NULL)
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
		free(node);
		free(node->key);
		return (0);
	}
	strcpy(node->key, key);
	strcpy(node->value, value);
	node->next = NULL;
	node->snext = NULL;
	node->sprev = NULL;

	index = key_index((unsigned char *)key, ht->size);

	compare(ht, node);
	add_at_shead(ht, node, index);

	return (1);
}

/**
 * compare - compares element and puts it in sorted order
 *
 * @table: - the hash table
 * @node: - node to be added in the sorted linked list
 *
 * Retrun: nothing
*/

void compare(shash_table_t *table, shash_node_t *node)
{
	shash_node_t *current = table->shead, *prev = NULL;
	int set = 0;

	if (table->shead == NULL)
	{
		table->shead = node;
		table->stail = node;
		return;
	}

	while (current != NULL)
	{
		if (set == 0 && strcmp(current->key, node->key) > 0)
		{
			if (prev != NULL)
			{
				prev->snext = node;
			}
			else
			{
				table->shead = node;
			}
			node->snext = current;
			node->sprev = prev;
			current->sprev = node;
			set = 1;
		}
		prev = current;
		current = current->snext;
	}
	table->stail = prev;

	if (!set)
	{
		table->stail->snext = node;
		node->sprev = table->stail;
		table->stail = node;
	}

}

/**
 * add_at_shead - add node at head of linked list
 *
 * @table: the hash table
 * @element: node of a linked list
 * @index: the place where the list is
 *
 * Return: nothing
 *
*/

void
add_at_shead(shash_table_t *table, shash_node_t *element, unsigned int index)
{
	shash_node_t *temp = table->array[index], *prev = NULL;


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

/**
 * shash_table_print - prints the table in order
 *
 * @ht: the hash table
 *
 * Return: nothing
 *
*/

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current = ht->shead;
	int i = 0;

	if (ht == NULL)
	return;

	printf("{");
	while (current != NULL)
	{
		if (i != 0)
		printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		current = current->snext;
		i = 1;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints the table in reverse order
 *
 * @ht: the hash table
 *
 * Return: nothing
 *
*/

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current = ht->stail;
	int i = 0;

	if (ht == NULL)
	return;

	printf("{");
	while (current != NULL)
	{
		if (i != 0)
		printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		current = current->sprev;
		i = 1;
	}
	printf("}\n");
}

/**
 * shash_table_delete - free's a table
 *
 * @ht: the hash table
 *
 * Return: nothing
 *
*/

void shash_table_delete(shash_table_t *ht)
{
	unsigned int i = 0;

	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		free_slist(ht->array[i]);
		i++;
	}
	free(ht->array);
	free(ht);
	ht = NULL;
}

/**
 * free_slist - free a liked list
 *
 * @head: head of a linked list
 *
 * Return: nothing
 *
*/

void free_slist(shash_node_t *head)
{
	shash_node_t *current = head;

	while (head != NULL)
	{
		current = head->next;
		free(head->key);
		free(head->value);
		free(head);
		head = current;
	}
}

/**
 * shash_table_get - finds the value based on the key
 *
 * @ht: the hash table
 * @key: key for the hash map
 *
 * Return: nothing
 *
*/

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned int index = 0;
	shash_node_t *current;

	if (ht == NULL || key == NULL)
	return (NULL);

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
