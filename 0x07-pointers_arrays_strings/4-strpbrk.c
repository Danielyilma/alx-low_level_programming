#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - filles same n
 *
 * @s: character pointer
 * @accept: character pointer
 *
 * Return: character
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			return (s);
		}
		s++;
	}
	return ('\0');
}
