#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at given idx
 *
 * @h: head of the list
 * @idx: index
 * @n: the data
 *
 * Return: the new node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *newnode = malloc(sizeof(dlistint_t)), *temp;
	unsigned int i = 0;

	if (newnode == NULL)
	return (NULL);
	newnode->n = n;

	while (current != NULL)
	{
		if (i == idx)
		{
			newnode->prev = current->prev;
			newnode->next = current;
			if (i != 0)
			current->prev->next = newnode;
			else
			*h = newnode;
			current->prev = newnode;
			return (newnode);
		}

		if (current->next == NULL)
		temp = current;

		current = current->next;
		i++;
	}
	if (i == idx)
	{
		temp->next = newnode;
		newnode->prev = temp;
		return (newnode);
	}


	free(newnode);
	return (NULL);
}
