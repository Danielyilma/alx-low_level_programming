#include <stdio.h>

/**
* _islower - check lower case letter
* parameter - integer 
* Return - integer 0 or 1
*/

int _islower(int c)
{
	if (c > 97 && c < 123)
	{
		return (1);
	}
	return (0);
}

