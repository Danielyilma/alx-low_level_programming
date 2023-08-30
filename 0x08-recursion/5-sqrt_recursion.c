#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - finds the factorial of n
 *
 * @n: integer
 *
 * Return: integer(length)
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - finds the factorial of n
 *
 * @n: integer
 *
 * @i: iterator
 *
 * Return: integer(length)
 */

int _sqrt(int n, int i)
{
	if (i * i == n)
	return (i);
	if (i > n)
	return (-1);
	++i;
	return (_sqrt(n, i));
}
