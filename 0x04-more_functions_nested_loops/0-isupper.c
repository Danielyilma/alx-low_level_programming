#include <stdio.h>
#include "main.h"

/**
 * _isupper - check upper case letter
 * @c: integer
 * Return: 0 or 1
*/

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	return (0);
}
