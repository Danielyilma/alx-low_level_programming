#include "lists.h"

/**
 * add_node - adding new node
 *
 * @head: head of the list
 * @str: value of the new node
 *
 * Return: new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	int i = 0;

	if (new == NULL)
	return (NULL);

	while (str[i] != '\0')
	i++;

	new->str = strdup(str);
	new->len = i;

	new->next = *head;

	*head = new;
	return (*head);
}
