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
	return (len);
}

/**
 * string_nconcat - returns a pointer to allocated space
 *
 * @s1: character pointer
 * @s2: character pointer
 * @n: unsigned integer
 *
 * Return: pointer
 *
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
        char *new;
        unsigned int i = 0, j, len1, len2;

        len1 = _strlen(s1);
        len2 = _strlen(s2);

        if (s1 == NULL)
        s1 = "";
        if (s2 == NULL)
        s2 = "";

        if (n > len2)
        n = len2;

        new = (char *)malloc(sizeof(char) * (len1 + len2 +1));
        if (new == NULL)
        return NULL;

        while (s1[i] != '\0')
        {
                new[i] = s1[i];
                i++; 
        }
        
        for (j = 0; j < n; j++, i++)
        {
                new[i] = s2[j];
        }
        new[i] = '\0';
        return (new);
}