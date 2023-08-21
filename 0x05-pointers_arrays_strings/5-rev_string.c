#include <stdio.h>
#include "main.h"

/**
* rev_string - changes integer to 98
*
* @s: pointer to character array
*
* Return: void
*/

void rev_string(char *s)
{
	int len = 0;
	char *rev = s;

	while (*s != '\0')
	{
		s++;
		len++;
	}

	while (len != 0)
	{
		_putchar(*s);
		*rev
		s--;
		len--;
	}
	_putchar('\n');
}
