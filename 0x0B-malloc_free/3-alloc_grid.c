#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - creates array and initialize
 *
 * @width: int
 *
 * @height: int
 *
 * Return: int pointer to pointer
 *
 **/

int **alloc_grid(int width, int height)
{
	int i, j, k, **array;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	array = (int **)malloc(sizeof(int *) * height);

	if (array == NULL)
	return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			array[j][k] = 0;
		}
	}

	return (array);
}
