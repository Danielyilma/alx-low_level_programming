#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates array and initialize
 *
 * @size: uint
 *
 * @c: character
 *
 * Return: character pointer
 *
 **/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	return (NULL);

	array = (char *)malloc(sizeof(char) * size);

	if (array == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);

}
