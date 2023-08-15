#include <stdio.h>
#include "main.h"

/**
	* print_last_digit - prints last digit of a number
	* @n: integer
	* Return: integer
*/

int print_last_digit(int n)
{
	int r;

	if (n >= 0)
	r = ((n % 10));
	else if (n < 0)
	r = (-1 * n) % 10;

	_putchar(r + '0');

	return (r);
}
