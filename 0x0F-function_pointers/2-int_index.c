#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - prints name
 *
 * @array: integer array
 * @size: array size
 * @cmp: function pointer
 *
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (size <= 0)
	return (-1);

	if (cmp == NULL)
	return (0);

	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result != 0)
		return (i);
	}
	return (-1);
}
