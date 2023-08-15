#include <stdio.h>
#include "main.h"

/**
	* jack_bauer - prints minites of a hour
	* REturn: void
*/

void jack_bauer(void)
{
	int i, j, k, z;

	for (i = 48; i < 50; i++)
	{
		for (j = 48; j < 51; j++)
		{
			for (k = 48; k < 58; k++)
			{
				for (z = 48; z < 58; z++)
				{
					if (i == 2 && j == 3 && k == 5 && z == 9)
					break;
					_putchar((char)i);
					_putchar((char)j);
					_putchar(':');
					_putchar((char)k);
					_putchar((char)z);
					_putchar('\n');
				}
				if (i == 2 && j == 3 && k == 5)
				break;
			}
		}
	}
}
