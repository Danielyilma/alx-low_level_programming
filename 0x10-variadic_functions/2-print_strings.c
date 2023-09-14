#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - sum all parameter
 *
 * @separator: size
 * @n: number of integer
 *
 * Return: integer
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	char *ch;
	va_list args;

	va_start(args, n);

	for (i = 0; i < (int)n; i++)
	{
		ch = va_arg(args, char*);
		if (ch != NULL)
		printf("%s", ch);
		else
		printf("(nil)");

		if (separator != NULL && i != ((int)n - 1))
		printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
