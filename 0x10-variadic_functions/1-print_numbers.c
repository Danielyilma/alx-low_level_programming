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

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i, num;
	va_list args;

	va_start(args, n);

	for (i = 0; i < (int)n; i++)
	{
		num = va_arg(args, int);
		if (i == ((int)n - 1))
		{
			printf("%d", num);
			break;
		}
		if (separator != NULL)
		printf("%d%s", num, separator);
	}
	printf("\n");
	va_end(args);
}
