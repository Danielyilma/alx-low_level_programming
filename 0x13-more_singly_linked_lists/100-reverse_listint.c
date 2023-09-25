#include "lists.h"

/**
 *
 *
 *
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *reverse = *head, *temp;

	*head = (*head)->next;
	reverse->next = NULL;
	while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = reverse;
		reverse = *head;
		*head = temp;
	}
	*head = reverse;
	return (*head);
}