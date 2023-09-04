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
	int i;
	char *array;

	if (str == NULL)
	return (NULL);

	array = (char *)malloc(sizeof(str));

	if (array == NULL)
	return (NULL);

	while (*(str + i) != '\0')
	{
		array[i] = *(str + i);
		i++;
	}
	return (array);
}
