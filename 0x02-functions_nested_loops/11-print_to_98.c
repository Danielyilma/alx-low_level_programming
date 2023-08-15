#include <stdio.h>
#include <math.h>
#include "main.h"

/**
	* print_to_98 - prints number upto 98
	* @n: integer
	* Return: none
*/

void print_to_98(int n)
{
	int i, j;

	for (i = n; i < 99; i++)
	{
		printf("%d", i);
		if (i != 98)
		printf(", ");
	}

	for (j = n; j > 97; j--)
	{
		printf("%d", j);
		if (j != 98)
		printf(", ");
	}
	printf("\n");
}
