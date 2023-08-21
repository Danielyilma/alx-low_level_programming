#include <stdio.h>
#include "main.h"

/**
* print_array - changes integer to 98
*
* @a: pointer to integer array
*
* @n: size of an array
* Return: integer
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		printf(", ");
	}
	printf("\n");
}
