#include "lists.h"

/**
 * free_dlistint - freeing the memory allocated to the list
 *
 * @head: head of the list
 *
 * Return: nothing
 *
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *temp;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
