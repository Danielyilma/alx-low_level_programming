#include <stdio.h>
#include "main.h"

/**
 * main - check upper case letter
 *
 * Return: 0 or 1
*/

int main(void)
{
	unsigned long int i, n = 612852475143;

	for (i = 3; i < 782849; i++)
	{
		while ((n % i == 0) && n != i)
		n = n / i;
	}
	printf("%lu\n", n);
	return (0);
}
