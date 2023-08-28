#include <stdio.h>
#include "main.h"

/**
 * _memset - filles same n
 *
 * @s: character pointer
 * @b: character
 * @n: integer
 *
 * Return: character
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < (int)n; i++)
	{
		s[i] = b;
	}
	return (s);
}
