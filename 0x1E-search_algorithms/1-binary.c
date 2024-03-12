#include "search_algos.h"
void print_array(int *array, int left, int right);

/**
 * binary_search - searches a value in sorted array
 *
 * @array: the array to be searched from
 * @size: the size of the array
 * @value: the value needed
 *
 * Return: -1 if it is not found else index of the value
*/

int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, mid,  val_index = -1;

	if (!array)
	return (-1);

	while (left <= right)
	{
		print_array(array, left, right);
		mid = (left + right) / 2;

		if (array[mid] == value)
		{
			val_index = mid;
			break;
		}
		else if (array[mid] > value)
		right = mid - 1;
		else
		left = mid + 1;
	}

	if (val_index == -1)
	return (-1);

	return (val_index);
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
