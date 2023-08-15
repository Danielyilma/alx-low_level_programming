#include <stdio.h>
#include <math.h>
#include "main.h"

/**
	* print_to_98 - prints number upto 98
	* @n: integer
	* Return: none
*/

void print_to_98(int n)
{
	int i;

	if ( n < 99)
	{
		for (i = n; i < 99; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10 + '0'));
				_putchar((i % 10 + '0'));
			}
			else
			{
				_putchar(i + '0');
			}
			if (i != 98)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			if (i > 100)
			{
				_putchar((i / 100 + '0'));
				_putchar((i % 10 + '0'));
				_putchar(((i % 100) % 10) + '0');
			}
			else
			{
				_putchar((i / 10 + '0'));
				_putchar((i % 10 + '0'));
			}
			if (i != 98)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
	}

}