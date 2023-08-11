#include <stdio.h>

/**
 * main - entry to program
 * Return: 0
*/
int main(void)
{
	int n  = 48;

	while (n < 103)
	{
		putchar((char)n);
		if (n == 57)
		n += 39;
		n++;
	}
	putchar('\n');
	return (0);
}
