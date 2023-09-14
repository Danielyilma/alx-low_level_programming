#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all parameter
 *
 * @n: size
 *
 * Return: integer
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, x, i;
	va_list args;

	if (n == 0)
	return (0);

	va_start(args, n);

	for (i = 0; i < (int)n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}
	va_end(args);
	return (sum);
}
