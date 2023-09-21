#include "lists.h"

/**
 *
 *
 *
 *
 *
 */

void free_list(list_t *head)
{
	list_t *current = head, *temp;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
	head = NULL;
}