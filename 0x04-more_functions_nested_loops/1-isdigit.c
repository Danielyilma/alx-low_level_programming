#include <stdio.h>
#include "main.h"

/**
 * _isdigit - check digit
 * @c: integer
 * Return: 0 or 1
*/

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	return (0);
}
