#include <stdio.h>
#include "main.h"

/**
 * _strchr - filles same n
 *
 * @s: character pointer
 * @c: character
 * @n: integer
 *
 * Return: character
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		break;
		s++;
	}

	return (s);
}
