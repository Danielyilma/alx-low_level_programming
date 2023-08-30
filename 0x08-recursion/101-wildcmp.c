#include <stdio.h>
#include "main.h"

/**
 * wildcmp - prints a string
 *
 * @s1: character pointer
 *
 * @s2: character pointer
 *
 * Return: integer
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
	return (0);
	if (*s1 == '\0' && *s2 == '\0')
	return (1);
	if (*s1 == *s2)
	return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
	return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
