#include <stdio.h>
#include "main.h"

/**
 * _strspn - filles same n
 *
 * @s: character pointer
 * @accept: character pointer
 *
 * Return: character
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}
			else if (accept[i + 1] == '\0')
			return (count);
		}
		s++;
	}
}
