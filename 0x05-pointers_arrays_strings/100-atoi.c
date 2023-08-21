#include <stdio.h>
#include "main.h"

/**
* _atoi - changes integer to 98
*
* @s: pointer to string
*
* Return: integer
*/

int _atoi(char *s)
{
	int num = 0, count = 0;

	while(*s != '\0')
	{
		if (*s == '-')
		count++;

		if ((*s >= '0' && *s <= '9'))
		{
			num = (num * 10) + *s - '0';
		}
		else if (*(s+1) == '\0' && num == 0)
		return (0);
		s++;
	}
	
	if (count % 2 != 0)
	return (-1*num);

	return (num);
}
