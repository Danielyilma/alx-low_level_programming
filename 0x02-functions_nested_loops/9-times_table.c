#include <stdio.h>
#include "main.h"

/**
	* times_table - prints multiplication table
	*Return: 0
*/

void times_table(void)
{
	int result, i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;
			if (result > 9)
			{

				_putchar((result / 10 + '0'));
				_putchar((result % 10 + '0'));
				if (j != 9)
				{
				_putchar(',');
				_putchar(' ');
				}
			}
			else
			{
				if (j != 0)
				_putchar(' ');
				_putchar((result + '0'));
				if (j != 9)
				{
				_putchar(',');
				_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
