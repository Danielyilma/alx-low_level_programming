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
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	while (*(s + j) != '\0')
	{
		j = 0;
		for (i = 0; *(accept + i) != '\0'; i++)
		{
			if (*(s + j) == *(accept + i))
			return (s + j);
		}
		j++;
	}
	return ('\0');
}
