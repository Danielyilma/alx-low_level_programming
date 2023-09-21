#include "lists.h"

/**
 * free_list - free linked list
 *
 * @head: head of a list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
