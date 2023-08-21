#include <stdio.h>
#include "main.h"

/**
* swap_int - swaps two integer
*
* @a: pointer to integer
*
* @b: pointer to integer
*/

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}

