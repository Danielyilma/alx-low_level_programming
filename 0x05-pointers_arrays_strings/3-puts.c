#include <stdio.h>
#include "main.h"

/**
* _puts - changes integer to 98
*
* @str: pointer to character array
*
* Return: integer
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
