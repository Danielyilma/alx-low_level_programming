#include <stdio.h>
#include "main.h"

/**
	* times_table - prints multiplication table
	*Return: 0
*/

void times_table(void)
{
	int res, ores, count = 0, dig, cha, i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			ores = i * j;
			res = ores;
			while (res != 0)
			{
				if (res > 9)
				{
					dig = res / 10;
					res %= 10;
				}
				else
				{
					dig = res;
					res = 0;
				}

				cha = dig + '0';
				_putchar(cha);
				count++;
			}
			_putchar(',');
			if (ores > 9)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');

	}
}