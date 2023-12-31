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
* _strcat - concatinate string
*
* @dest: pointer to character
*
* @src: pointer to character
*
* Return: character pointer
*/

char *_strcat(char *dest, char *src)
{
	int len1, len2;
	char *temp = dest;

	len1 = _strlen(dest);
	len2 = _strlen(src);
	temp += len1;

	while (*src != '\0')
	{
		*temp = *src;
		src++;
		temp++;
	}
	temp -= (len1 + len2);
	return (temp);
}
