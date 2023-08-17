#include <stdio.h>
#include "main.h"

/**
 * print_numbers - check upper case letter
 *
 * Return: 0 or 1
*/

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
