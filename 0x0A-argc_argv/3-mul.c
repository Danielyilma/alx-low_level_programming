#include <stdio.h>
#include <stdlib.h>
/**
 * main - print command line argument
 *
 * @argc: integer
 *
 * @argv: array of pointer
 *
 * Return: 0
 *
 */

int main(int argc, char *argv[])
{
	int i, product = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			product *= atoi(argv[i]);
		}
		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
