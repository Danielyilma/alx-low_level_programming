#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * type - identify the type
 *
 * @size: integer
 *
 * Return: integer
 */
int type(unsigned int size)
{
	if (size == sizeof(int))
	return (0);
	if (size == sizeof(char))
	return (1);
	if (size == sizeof(unsigned int))
	return (2);
	return (3);
}

/**
 * _calloc - returns a pointer to allocated space
 *
 * @size: unsigned integer
 * @nmemb: unsigned integer
 *
 * Return: pointer
 *
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	void *array;
	int types;

	types = type(size);
	if (nmemb == 0 || size == 0)
	return (NULL);
	array = malloc(size * nmemb);

	if (array == NULL)
	return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		if (types == 0)
		*(((int *)array) + i) = 0;
		if (types == 1)
		*(((char *)array) + i) = 0;
		if (types == 2)
		*(((unsigned int *)array) + i) = 0;
	}

	return (array);
}
