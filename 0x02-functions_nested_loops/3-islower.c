#include <stdio.h>
#include "main.h"

/**
* _islower - check lower case letter
* @c: integer
* Return: integer 0 or 1
*/

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	return (0);
}
