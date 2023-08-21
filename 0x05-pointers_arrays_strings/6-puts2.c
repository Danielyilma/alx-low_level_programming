#include <stdio.h>
#include "main.h"

/**
* puts2 - changes integer to 98
*
* @str: pointer to character array
*
* Return: integer
*/

void puts2(char *str)
{
	while (*str != '\0')
	{
		if (((int)*str - 48) % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
	}
	_putchar('\n');
}
