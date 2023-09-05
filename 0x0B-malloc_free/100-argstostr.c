#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strlen2 - changes integer to 98
*
* @s: pointer to character array
*
*
* @size: integer
* Return: integer
*/

int _strlen2(char **s, int size)
{
	int i, j, len = 0;

	for (i = 1; i < size; i++)
	{
		j = 0;
		while (s[i][j] != '\0')
		{
			len++;
			j++;
		}
	}
	return (len);
}

/**
 * argstostr - creates array and initialize
 *
 * @ac: uint
 *
 * @av: character
 *
 * Return: character pointer
 *
 **/

char *argstostr(int ac, char **av)
{
	int i, j, z = 0, len;
	char *str;

	len = _strlen2(av, ac);
	str = (char *)malloc(sizeof(char) * (len + 1));
	for (i = 1; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			str[z] = av[i][j];
			j++;
			z++;
		}
		str[z] = '\n';
		z++;
	}
	return (str);
}
