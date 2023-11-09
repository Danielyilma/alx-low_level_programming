#include "lists.h"

/**
 * 
 * 
 * 
 * 
 * 
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *newnode = malloc(sizeof(dlistint_t)), *lastnode = NULL;

    if (newnode == NULL)
    return (NULL);

    newnode->n = n;
    newnode->next = NULL;

    if (*head == NULL)
    {
        newnode->prev = NULL;
        *head = newnode;
        return (newnode);
    }

    lastnode = *head;

    while (lastnode->next != NULL)
    {
        lastnode = lastnode->next;
    }
    lastnode->next = newnode;
    newnode->prev = lastnode;

    return (newnode);
}