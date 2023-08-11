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
		if (n != 57)
		{
		putchar(',');
		putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
