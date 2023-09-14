#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * _switch - sum all parameter
 *
 * @_format: size
 * @in: bool
 * @arg1: va_list
 *
 * Return: nothing
 */

void _switch(char _format, int *in, va_list arg1)
{
	int num;
	char ch, *chr;
	float numf;

	switch (_format)
		{
			case 'c':
			ch = va_arg(arg1, int);
			printf("%c", ch);
			*in = 1;
			break;
			case 'i':
			num = va_arg(arg1, int);
			printf("%d", num);
			*in = 1;
			break;
			case 'f':
			numf = va_arg(arg1, double);
			printf("%f", numf);
			*in = 1;
			break;
			case 's':
			chr = va_arg(arg1, char *);
			if (chr == NULL)
			{
				printf("(nil)");
				*in = 1;
				break;
			}
			*in = 1;
			printf("%s", chr);
			break;
		}
}
/**
 * print_all - sum all parameter
 *
 * @format: size
 *
 * Return: integer
 */

void print_all(const char * const format, ...)
{
	int j = 0, inswitch = 0;

	va_list args;

	va_start(args, format);
	while (format[j])
	{
		_switch(format[j], &inswitch, args);
		if (format[j + 1] != '\0' && inswitch)
		{
			printf(", ");
			inswitch = 0;
		}
		j++;
	}
	printf("\n");
	va_end(args);
}
