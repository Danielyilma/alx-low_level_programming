#include <stdio.h>
#include "main.h"

/**
* puts2 - changes integer to 98
*
* @str: pointer to character array
*
* Return: integer
*/

void puts_half(char *str)
{
	int len = 0, n, i;
	char *temp = str;

	while (*temp != '\0')
	{
		len++;
		temp++;
	}
	n = (len + 1) / 2;	
	str = str + n;

	for (i = n; i < len; i++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
