#include <stdio.h>
#include "main.h"

int is_prime(int n, int i);
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

/**
 * is_prime_number - finds the factorial of n
 *
 * @n: integer
 *
 * Return: integer(length)
 */

int is_prime_number(int n)
{
	int i = _sqrt_recursion(n);

	if (n < 0 || n == 1)
	return (0);
	return (is_prime(n, i));
}

/**
 * is_prime - finds the factorial of n
 *
 * @n: integer
 *
 * @i: itration
 *
 * Return: integer(length)
 */

int is_prime(int n, int i)
{
	if (i <= 1)
	return (1);
	if (n % i == 0 && i != 1)
	return (0);

	i--;
	return (is_prime(n, i));
}
