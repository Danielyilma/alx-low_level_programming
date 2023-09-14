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

void print_all(const char * const format, ...)
{
	int i = 0, j = 0, num;
	char ch, *chr;
	float numf;
	char *type = "int", *fors = "%s";
	va_list args;

	va_start(args, format);

	while (format[i])
	{
		i++;
	}

	while (j < i)
	{
		if (format[j] == 'c')
		{
			ch = va_arg(args, int);
			printf("%c", ch);
		}
		if (format[j] == 'i')
		{
			num = va_arg(args, int);
			printf("%d", num);
		}
		if (format[j] == 'f')
		{
			numf = va_arg(args, double);
			printf("%f", numf);
		}
		if (format[j] == 's')
		{
			chr = va_arg(args, char *);
			printf("%s", chr);
		}
		printf(form, type);
		if (j != (i - 1))
		printf(", ");

		j++;
	}
	printf("\n");
	va_end(args);
}
