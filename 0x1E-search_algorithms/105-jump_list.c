#include "search_algos.h"

listint_t *find_list(listint_t *back, listint_t *front, int value);

/**
 * jump_list - finds an element from a list
 *
 * @list: the list pointer
 * @size: the size of the list
 * @value: the value to be searched for
 *
 * Return: pointer to the list if it is found else null
*/

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int jump = sqrt(size), i = 0;
	listint_t *front = list, *back = list, *val_list = NULL;

	if (!list)
	return (NULL);

	while (front)
	{
		if ((int) front->index == jump)
		break;
		front = front->next;
	}

	while (front)
	{
		if (front->n > value)
		{
			printf("Value checked at index [%ld] = [%d]\n", front->index, front->n);
			printf("Value found between indexes ");
			printf("[%ld] and [%ld]\n", back->index, front->index);
			val_list = find_list(back, front, value);
			break;
		}
		printf("Value checked at index [%ld] = [%d]\n", front->index, front->n);
		back = front;
		for (i = 0; i < jump && front; i++)
		{
			front = front->next;
		}
	}

	if (front == NULL)
	{
		printf("Value found between indexes ");
		printf("[%ld] and [%ld]\n", back->index, size - 1);
		val_list = find_list(back, front, value);
	}

	return (val_list);
}

/**
 * find_list - find a value from small range list
 *
 * @back: the start pointer
 * @front: the end pointer
 * @value: the value to be searched for
 *
 * Return: pointer to the list if it is found else null
 */

listint_t *find_list(listint_t *back, listint_t *front, int value)
{
	while (back != front)
	{
		printf("Value checked at index [%ld] = [%d]\n", back->index, back->n);
		if (back->n == value)
		{
			return (back);
		}

		back = back->next;
	}
	return (NULL);
}
