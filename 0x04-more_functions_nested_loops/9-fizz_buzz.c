#include <stdio.h>

/**
 * main - printing from 1 - 100
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3 == 0) && (i % 5 != 0))
		{
			printf("Fizz");
			if (i != 100)
			putchar(' ');
			continue;
		}
		else if ((i % 3 != 0) && (i % 5 == 0))
		{
			printf("Buzz");
			if (i != 100)
			putchar(' ');
			continue;
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
			if (i != 100)
			putchar(' ');
			continue;
		}
		printf("%d", i);
		if (i != 100)
		putchar(' ');
	}
	printf("\n");

	return (0);
}
