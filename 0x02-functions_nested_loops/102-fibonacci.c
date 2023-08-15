#include <stdio.h>
#include "main.h"

/**
	* main - print fibonachi sequence
	* Return: 0
	* fibonacci - fibonacci series
	* @n: integer
	*
*/

int fibonacci(int n);

int main(void)
{
	int i;

	for (i = 1; i < 51; i++)
	{
		printf("%d", fibonacci(i));
		if (i != 50)
		printf(", ");
	}
	putchar('\n');
	return (0);
}

int fibonacci(int n)
{
	if (n == 1)
	return (1);
	else if (n == 2)
	return (2);
	else
	return (fibonacci(n - 1) + fibonacci(n - 2));
}
