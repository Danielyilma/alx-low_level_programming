#include "search_algos.h"

int find_pos(int *array, int high, int low, int value);

/**
 * interpolation_search - search an element from an array
 *
 * @array: the array to be searched from
 * @size: the size of the array
 * @value: the value to be searched
 *
 * Return: index if it is found else -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1, val_index = -1, pos;

	if (!array)
	return (-1);

	pos = find_pos(array, high, low, value);

	while (pos > 0 && pos < (int) size)
	{
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
		{
			val_index = pos;
			break;
		}
		else if (array[pos] < value)
		low = pos;
		else
		high = pos;

		pos = find_pos(array, high, low, value);
	}

	if (pos >= (int) size)
	printf("Value checked array[%d] is out of range\n", pos);

	if (val_index == -1)
	return (-1);

	return (val_index);
}

/**
 * find_pos - find the postition index
 *
 * @array: the array to be searched from
 * @low: the lower index of the array
 * @high: the top boundary of the array
 * @value: the value to be searched
 *
 * Return: position index
 */
int find_pos(int *array, int high, int low, int value)
{
	double temp = ((double)(high - low) / (array[high] - array[low]));

	return (low + (temp * (value - array[low])));
}
