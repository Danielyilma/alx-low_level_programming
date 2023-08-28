#include <stdio.h>
#include "main.h"

/**
 * _memcpy - filles same n
 *
 * @dest: character pointer
 * @src: character pointer
 * @n: integer
 *
 * Return: character
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < (int)n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
