#include <stdio.h>
#include "main.h"

/**
* print_rev - changes integer to 98
*
* @s: pointer to character array
*
* Return: integer
*/

void print_rev(char *s)
{
	char *point = s;
	while (*s != '\0')
	{
		s++;
	}

	while (s != point - 1)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
