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
	int len = 0;

	while (*str != '\0')
	{
		if (len % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
		len++;
	}
	_putchar('\n');
}
