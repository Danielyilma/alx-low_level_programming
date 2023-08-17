#include <stdio.h>
#include "main.h"

/**
 * print_triangle - check upper case letter
 * @size: integer
 * Return: void
*/

void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		for (k = size - 1; k > i; k--)
		{
			_putchar(' ');
		}

		for (j = 0; j < i + 1; j++)
		{
			_putchar('#');
		}
		if (i != size - 1)
		_putchar('\n');
	}
	_putchar('\n');
}
