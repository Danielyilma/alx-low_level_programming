#include "lists.h"

/**
 * print_listint - printing list
 *
 * @head: head of a list
 *
 * Return: list size
 *
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	if (head == NULL)
	return (0);

	while (head != NULL)
	{
		printf("[%p] %d\n",(void *)(&(head->n)), head->n);
		head = head->next;
		count++;
	}
	return (count);
}
