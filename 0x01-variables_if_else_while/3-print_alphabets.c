#include <stdio.h>

/**
 * main - entry to program
 * Return: 0
*/
int main(void)
{
	int n  = 97, u = 65;

	while (n < 123)
	{
	putchar((char)n);
	n++;
	}

	while (u < 91)
	{
	putchar((char)u);
	u++;
	}

	putchar('\n');
	return (0);
}
