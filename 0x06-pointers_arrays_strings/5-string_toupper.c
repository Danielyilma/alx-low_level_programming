#include <stdio.h>
#include "main.h"

/**
* string_toupper- concatinate n string
*
* @n: pointer to character
*
* Return: character pointer
*/

char *string_toupper(char *n)
{
	int len = 0;

	while (*n != '\0')
	{
		if (*n >= 97 && *n <= 122)
		*n -= 32;

		n++;
		len++;
	}
	n -= len;
	return (n);
}
