#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - finds the factorial of n
 *
 * @x: integer
 *
 * @y: the power integer
 *
 * Return: integer(length)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);
	if (y == 0)
	return (1);
	return (x * _pow_recursion(x, y - 1));
}
