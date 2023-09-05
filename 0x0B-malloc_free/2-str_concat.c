#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
	int i = 0, j = 0;
	char *array;

	array = (char *)malloc(sizeof(*s1) + sizeof(*s2) - 1);

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
