#include "lists.h"

/**
 * dlistint_len - finding the lebght of a list
 *
 * @h: head of hte list
 *
 * Return: the number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *current = NULL;
	size_t n = 0;

	if (h != NULL)
	{
		n++;
		current = h->next;
	}

	while (current != NULL)
	{
		current = current->next;
		n++;
	}
	return (n);
}
