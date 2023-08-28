#include <stdio.h>
#include "main.h"

/**
 * _strchr - filles same n
 *
 * @s: character pointer
 * @c: character
 *
 * Return: character
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		return (s);
		s++;
	}
	return (s);
}
