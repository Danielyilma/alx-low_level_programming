#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 *
 * @head: head of the list
 * @index: index
 *
 * Return: integer
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *temp;
	unsigned int i = 0;

	while (current != NULL)
	{
		if (i == index)
		{
			temp = current;
			if (i != 0)
			current->prev->next = current->next;
			if (current->next != NULL)
			current->next->prev = current->prev;
			if (i == 0)
			*head = current->next;
			free(temp);
			return (1);
		}
		current = current->next;
		i++;
	}
	return (-1);
}
