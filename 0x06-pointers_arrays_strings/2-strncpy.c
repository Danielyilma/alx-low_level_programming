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
* _strncpy - concatinate n string
*
* @dest: pointer to character
*
* @src: pointer to character
*
* @n: number of integer to be concatinate
*
* Return: character pointer
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *temp = dest;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		*temp = *src;
		src++;
		temp++;
	}

	while (i < n)
	{
		*temp = '\0';
		temp++;
		i++;
	}

	return (dest);
}
