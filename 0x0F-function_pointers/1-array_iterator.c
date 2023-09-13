#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints name
 *
 * @array: integer array
 * @size: array size
 * @action: function pointer
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; i++)
	action(array[i]);
}
