#include <stdio.h>
#include <stdlib.h>
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

	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len + 1);
}


/**
 * str_concat - creates array and initialize
 *
 * @s1: character pointer
 *
 * @s2: character pointer
 *
 * Return: character pointer
 *
 **/

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, len1, len2;
	char *array;

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	array = (char *)malloc(sizeof(char) * (len1 + len2));

	if (array == NULL)
	return (NULL);
	while (s1[i] != '\0')
	{
		array[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		array[i] = s2[j];
		j++;
		i++;
	}
	array[i + 1] = '\0';
	return (array);
}
