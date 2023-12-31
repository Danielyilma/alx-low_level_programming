#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - returns a pointer to allocated space
 *
 * @ptr: unsigned integer
 * @old_size: int
 * @new_size: int
 *
 * Return: pointer
 *
 **/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *nptr;

	if (new_size == old_size)
	return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
		return (NULL);
		return (ptr);
	}

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		nptr = malloc(old_size + new_size);
		if (nptr == NULL)
		return (NULL);
		for (i = 0; i < old_size; i++)
		{
			((char *)nptr)[i] = ((char *)ptr)[i];
		}
		free(ptr);
	}
	return (nptr);
}
