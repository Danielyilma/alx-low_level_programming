#include "lists.h"

/**
 *
 *
 *
 *
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast = head, *slow = head;
	int loop = 0;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		fast = fast->next->next;
		slow = slow->next;

		if (slow == fast)
		{
			loop = 1;
			break;
		}
	}

	if (loop)
	return (slow);
	else
	return (NULL);
}