#include <stdio.h>
#include "main.h"

/**
 * _strspn - filles same n
 *
 * @s: character pointer
 * @accept: character pointer
 *
 * Return: character
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int len2 = 0, j, i, len1 = 0;

	while (*(s + len1) != '\0')
	{
		len1++;
	}

	printf("%d\n", len1);

	while (*(accept + len2) != '\0')
	{
		len2++;
	}


	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
			}

		}
		if (i > (int)count)
		return (count);

	}
	return (count);
}
