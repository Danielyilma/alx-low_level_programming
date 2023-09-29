#include "main.h"

/**
 * get_bit - get specefic bit from binary
 *
 * @n: decimal number
 * @index: index to be find
 *
 * Return: integer
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value = -1;

	n = n >> index;
	if (n == 0)
	return (-1);

	value = n & 1;

	return (value);
}
