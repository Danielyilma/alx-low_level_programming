#include "lists.h"

/**
 * get_dnodeint_at_index - get node at a given index
 *
 * @head: head of the list
 * @index: idex of the node
 *
 * Return: the node at given index
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		return (head);

		head = head->next;
		i++;
	}
	return (NULL);
}
