#include <stdio.h>
#include "main.h"

/**
* _strlen - changes integer to 98
*
* @s: pointer to character array
*
* Return: integer
*/

int _strlen(char *s)
{
	int len = 0;

	for (; *s != '\0'; s++)
	{
		len++;
	}
	return (len);
}
