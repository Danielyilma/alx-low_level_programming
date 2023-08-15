#include <stdio.h>
#include "main.h"

/**
	* jack_bauer - prints minites of a hour
	* REturn: void
*/

void jack_bauer(void)
{
	int i, j, k, z;

	for (i = 48; i < 51; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = 48; k < 54; k++)
			{
				for (z = 48; z < 58; z++)
				{
					_putchar((char)i);
					_putchar((char)j);
					_putchar(':');
					_putchar((char)k);
					_putchar((char)z);
					_putchar('\n');
				}
			}
			if (i == 50 && j == 51)
			break;
		}
	}
}
