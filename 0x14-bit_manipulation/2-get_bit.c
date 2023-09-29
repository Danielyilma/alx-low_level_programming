#include "main.h"

/**
 * twos_power - fin power of 2's
 *
 * @pow: power for the base
 *
 * Return: integer
 *
 */

int twos_power(int pow)
{
	int num = 1;

	while (pow > 0)
	{
		num *= 2;
		pow--;
	}
	return (num);
}

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

	if ((int)n < twos_power(index))
	return (-1);

	n = n >> index;
	value = n & 1;

	return (value);
}
