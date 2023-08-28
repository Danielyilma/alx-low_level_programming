#include <stdio.h>
#include "main.h"

/**
 * _strchr - filles same n
 *
 * @s: character pointer
 * @c: character
 *
 * Return: character
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
