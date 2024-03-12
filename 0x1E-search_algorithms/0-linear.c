#include "search_algos.h"

/**
 * linear_search - searches a value one by one in the array
 *
 * @array: the array to be searched from
 * @size: the size of the array
 * @value: the value needed
 *
 * Return: -1 if it is not found else index of the value
*/

int linear_search(int *array, size_t size, int value)
{
	int i = 0, val_index = -1;

	if (!array)
	return (-1);

	for (i = 0; i < (int) size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			val_index = i;
			break;
		}
	}

	return (val_index);
}
