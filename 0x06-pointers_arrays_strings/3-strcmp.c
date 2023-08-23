#include <stdio.h>
#include "main.h"

/**
* _strlen - concatinate string
*
* @s: pointer to character
*
* Return: integer
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
* _strcmp - concatinate n string
*
* @s1: pointer to character
*
* @s2: pointer to character
*
* Return: character pointer
*/

int _strcmp(char *s1, char *s2)
{
	int i, len1, len2, n;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	n = len1 > len2 ? len1 : len2;

	for (i = 0; i < n; i++)
	{
		if (*s1 > *s2)
		{
			return (*s1 - *s2);
		}
		else if (*s1 < *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
