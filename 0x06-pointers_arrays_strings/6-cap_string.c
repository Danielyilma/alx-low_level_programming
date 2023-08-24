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
	int i, len = 0;

	for (i = 0; *n != '\0'; i++)
	{
		if (*n == ' ' || *n == '\n'
		|| *n == '.' || *n == '\t'
		|| *n == '!' || *n == ';'
		|| *n == '(' || *n == ')'
		|| *n == '{' || *n == '}'
		|| *n == '?' || *n == '"')
		{
			if (*(n + 1) >= 97 && *(n + 1) <= 122)
			*(n + 1) -= 32;
		}
		n++;
		len++;
	}
	n -= len;
	return (n);
}
