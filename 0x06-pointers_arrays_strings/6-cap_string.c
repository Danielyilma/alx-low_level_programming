#include <stdio.h>
#include "main.h"

/**
* cap_string - concatinate n string
*
* @n: pointer to character
*
* Return: character pointer
*/

char *cap_string(char *n)
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
