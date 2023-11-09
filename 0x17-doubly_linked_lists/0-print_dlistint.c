#include "lists.h"

/**
 * print_dlistint - printing doubly linked list
 *
 * @h: head of the linked list
 *
 * Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *temp = NULL;
	size_t n = 0;

	if (h != NULL)
	{
		printf("%d\n", h->n);
		temp = h->next;
		n++;
	}

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		n++;
		temp = temp->next;
	}
	return (n);
}
