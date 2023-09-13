#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * @argc: string counter
 * @argv: string
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, bites;
	char *pointer;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}


	bites = atoi(argv[1]);
	pointer = (char *)main;

	if (bites < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bites; i++)
	{
		printf("%02hhx", pointer[i]);
		if (i != (bites - 1))
		printf(" ");
	}
	printf("\n");
}
