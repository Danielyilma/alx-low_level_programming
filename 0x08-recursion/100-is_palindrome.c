#include <stdio.h>
#include "main.h"

int _rev(char *s);
int palindrom(char *s, char *g, int i, int y);


/**
 * _rev - prints a string
 *
 * @s: character pointer
 *
 * Return: int
 */

int _rev(char *s)
{
	if (*s == '\0')
	return (0);
	return (1 + _rev(s + 1));
}

/**
 * is_palindrome - prints a string
 *
 * @s: character pointer
 *
 * Return: integer
 */

int is_palindrome(char *s)
{
	int i = (_rev(s) - 1), y = i;
	char *g = s;

	return (palindrom(s, g, i, y));
}

/**
 * palindrom - prints a string
 *
 * @s: character pointer
 *
 * @g: character
 *
 * @y: reverse character
 *
 * @i: itrator
 *
 * Return: integer
 */

int palindrom(char *s, char *g, int i, int y)
{
	if (i == y / 2)
	return (1);
	if (*s == *(g + i))
	return (palindrom(s + 1, g, i - 1, y));
	return (0);
}
