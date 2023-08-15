#include <stdio.h>
#include "main.h"

/**
	* print_last_digit - prints last digit of a number
	* @n: integer
	* Return: integer
*/

int print_last_digit(int n)
{
	int r = n % 10;

	_putchar(r + '0');
	return (0);
}
