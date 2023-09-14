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

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	char *ch;
	va_list args;

	for (i = 0; i < (int)n; i++)
	{
		ch = va_arg(args, char);
		if (i == ((int)n - 1))
		printf("%s", ch);
		if (separator != NULL && ch != NULL)
		printf("%s%s", ch, separator);
		if (ch == NULL && separator != NULL)
		printf("(nil)");
	}
	va_end(args);
}
