#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - creates array and initialize
 *
 * @str: character pointer
 *
 * Return: character pointer
 *
 **/

char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *array;

	if (str == NULL)
	return (NULL);

	while (*(str + i) != '\0')
	{
		i++;
	}

	array = (char *)malloc(sizeof(char) * (i + 1));

	if (array == NULL)
	return (NULL);

	while (*(str + j) != '\0')
	{
		array[j] = *(str + j);
		j++;
	}
	return (array);
}
