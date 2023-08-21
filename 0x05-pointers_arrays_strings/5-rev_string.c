#include <stdio.h>
#include "main.h"

/**
* rev_string - changes integer to 98
*
* @s: pointer to character array
*
* Return: void
*/

void rev_string(char *s)
{
	int len = 0, start = 0, end;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}

	end = len - 1;

	while (start <= end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
