#include "lists.h"

/**
 * 
 * 
 * 
 * 
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
