#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned int n;

	n = flip_bits(ULONG_MAX, 0);
	printf("%u\n", n);
	return (0);
}