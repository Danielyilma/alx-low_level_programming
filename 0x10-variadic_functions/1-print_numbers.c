#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - sum all parameter
 *
 * @separator: separator character
 * @n: unsigned integer
 *
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i, num;
	va_list args;

	va_start(args, n);

	for (i = 0; i < (int)n; i++)
	{
		num = va_arg(args, int);

		printf("%d", num);

		if (separator != NULL && i != ((int)n - 1))
		printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
