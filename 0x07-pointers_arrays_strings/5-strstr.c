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
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (*haystack)
	{
			for (i = 0; needle[i]; i++)
			{
				if (*haystack == needle[0])
				return (haystack);
			}
		haystack++;
	}
	return ('\0');
}
