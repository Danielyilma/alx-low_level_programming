#include "search_algos.h"

int split_binary(int *array, int left, int right, int value);
void print_array(int *array, int left, int right);

/**
 * advanced_binary - searches a value in sorted array
 *
 * @array: the array to be searched from
 * @size: the size of the array
 * @value: the value needed
 *
 * Return: -1 if it is not found else index of the value
*/

int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
	return (-1);

	return (split_binary(array, 0, size - 1, value));
}

/**
 * split_binary - splits the array into half
 *
 * @array: the array to be printed
 * @left: start of the array
 * @right: end of the array
 * @value: the value needed
 *
 * Return: -1 if it is not found else index of the value
 */

int split_binary(int *array, int left, int right, int value)
{
	int mid = (left + right) / 2, val_index = -1;

	print_array(array, left, right);

	if (array[left] == value)
	return (left);


	if ((right - left) == 0)
	{
		if (array[left] == value)
		return (left);
		else
		return (-1);
	}

	if (array[mid] >= value)
	val_index = split_binary(array, left, mid, value);
	else
	val_index = split_binary(array, mid + 1, right, value);

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
