#include <stdio.h>

/**
 * main - entry to program
 * Return: 0
*/
int main(void)
{
	int n  = 48;

	while (n < 58)
	{
		putchar((char)n);
		n++;
	}
	putchar('\n');
	return (0);
}
