#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - print all data type
 *
 * @format: character pointer
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	char *ch;
	int i = 0, j = 0;
	va_list args;

	va_start(args, format);
	while (!format)
	{
	printf("\n");
	return;
	}
	while (format[j])
	{
		i = 0;
		switch (format[j])
		{
			case 'c':
			printf("%c", va_arg(args, int));
			i = 1;
			break;
			case 'i':
			printf("%d", va_arg(args, int));
			i = 1;
			break;
			case 'f':
			printf("%f", va_arg(args, double));
			i = 1;
			break;
			case 's':
			ch = va_arg(args, char *);
			i = 1;
			if (!ch)
			ch = "(nil)";
			printf("%s", ch);
			break;
		}
		if (format[j + 1] != '\0' && i)
		printf(", ");
		j++;
	}
	printf("\n");
}
