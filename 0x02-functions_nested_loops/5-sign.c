#include <stdio.h>
#include "main.h"

/**
	* print_sign - prints sign of a number
	* @n: integer
	* Return: 1 or 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 1)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
