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
	int j = 0, num;
	char ch, *chr;
	float numf;
	int inswitch = 0;
	va_list args;

	va_start(args, format);
	while (format[j])
	{
		switch (format[j])
		{
			case 'c':
			ch = va_arg(args, int);
			printf("%c", ch);
			inswitch = 1 ;
			break;
			case 'i':
			num = va_arg(args, int);
			printf("%d", num);
			inswitch = 1;
			break;
			case 'f':
			numf = va_arg(args, double);
			printf("%f", numf);
			inswitch = 1;
			break;
			case 's':
			chr = va_arg(args, char *);
			if (chr == NULL)
			{
				printf("(nil)");
				inswitch = 1;
				break;
			}
			inswitch = 1;
			printf("%s", chr);
			break;			
		}
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
