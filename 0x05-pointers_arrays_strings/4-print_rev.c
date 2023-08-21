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
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for ( ; i != 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
