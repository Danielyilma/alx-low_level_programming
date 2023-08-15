#include <stdio.h>

/**
 * print_alphabet - print alphabet from start to end 10 times
 * @void: no parameter
 * Return: void
 */

void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 97; j < 113; i++)
		{
		putchar((char)j);
		}

		putchar('\n');
	}

}
