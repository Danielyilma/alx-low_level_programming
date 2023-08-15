#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - print alphabet from start to end 10 times
 * @void: no parameter
 * Return: none
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j < 113; j++)
		{
			putchar((char)j);
		}

		putchar('\n');
	}
	return;
}
