#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - print alphabet from start to end 10 times
 * @void: no parameter
 * description: uses nested for loop to print alphabets
 * Return: none
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j < 123; j++)
		{
			_putchar((char)j);
		}

		_putchar('\n');
	}
}
