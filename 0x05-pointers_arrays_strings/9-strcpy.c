#include <stdio.h>
#include "main.h"

/**
* _strcpy - changes integer to 98
*
* @dest: pointer to character array
*
* @src: pointer to string
*
* Return: character pointer
*/

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		count++;
	}
	*dest = '\0';
	dest -= count;
	return (dest);
}
