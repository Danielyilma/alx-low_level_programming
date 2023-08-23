#include <stdio.h>
#include "main.h"

/**
* reverse_array - concatinate n string
*
* @a: pointer to character
*
* @n: pointer to character
*
* Return: character pointer
*/

void reverse_array(int *a, int n)
{
	int temp, i, j = (n - 1);

	for (i = 0; i < n; i++)
	{
		if (i > j)
		break;
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
	}
}
