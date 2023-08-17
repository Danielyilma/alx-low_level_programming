#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - check upper case letter
 *
 * Return: 0 or 1
*/

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
		continue;
		_putchar(i);
	}
	_putchar('\n');
}
