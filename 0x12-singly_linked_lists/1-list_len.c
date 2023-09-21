#include "lists.h"

/**
 * list_len - length of the list
 *
 * @h: list_t
 *
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
