#include "search_algos.h"

int _binary_search(int *array, int left, int right, int value);
void print_array(int *array, int left, int right);

/**
 * exponential_search - search an element from an array
 *
 * @array: the array to be searched from
 * @size: the size of the array
 * @value: the value to be searched
 *
 * Return: index if it is found else -1
 */

int exponential_search(int *array, size_t size, int value)
{
	int val_index = -1, i = 0, pre_i = 0;

	if (!array)
	return (-1);

	if (array[i] == value)
	return (i);

	for (i = 1; i < (int) size; i *= 2)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			val_index = i;
			break;
		}
		else if (array[i] > value)
		{
			val_index = _binary_search(array, pre_i, i, value);
			break;
		}
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		pre_i = i;
	}

	if (i >= (int) size)
	{
		val_index = _binary_search(array, pre_i, size - 1, value);
	}

	return (val_index);
}

/**
 * _binary_search - searches a value in sorted array
 *
 * @array: the array to be searched from
 * @left: the lower boundary of the array
 * @right: the upper boundary of the array
 * @value: the value needed
 *
 * Return: -1 if it is not found else index of the value
*/

int _binary_search(int *array, int left, int right, int value)
{
	int mid;

	printf("Value found between indexes [%d] and [%d]\n", left, right);
	while (left <= right)
	{
		print_array(array, left, right);
		mid = (left + right) / 2;

		if (array[mid] == value)
		return (mid);
		else if (array[mid] > value)
		right = mid - 1;
		else
		left = mid + 1;
	}
	return (-1);
}

/**
 * print_array - prints array to stdout
 *
 * @array: the array to be printed
 * @left: start of the array
 * @right: end of the array
 *
 * Return: nothing
**/

void print_array(int *array, int left, int right)
{
	printf("Searching in array: ");
	for (; left <= right; left++)
	{
		printf("%d", array[left]);
		if (left != right)
		printf(", ");
	}
	printf("\n");
}
