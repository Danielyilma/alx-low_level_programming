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
* _strncat - concatinate n string
*
* @dest: pointer to character
*
* @src: pointer to character
*
* @n: number of integer to be concatinate
*
* Return: character pointer
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, len1, len2;
	char *temp = dest;

	len1 = _strlen(dest);
	len2 = _strlen(src);
	temp += len1;

	for (i = 0; i < n; i++)
	{
		*temp = *src;
		if (len2 < n)
		n = len2;

		src++;
		temp++;
		if (i == (n - 1))
		*temp = '\0';
	}
	temp -= (len1 + n);

	return (temp);
}
