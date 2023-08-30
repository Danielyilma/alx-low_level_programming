#include <stdio.h>
#include "main.h"

/**
 * factorial - finds the factorial of n
 *
 * @n: integer
 *
 * Return: integer(length)
 */

int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n == 0)
	return (1);
	return (n * factorial(n - 1));
}
