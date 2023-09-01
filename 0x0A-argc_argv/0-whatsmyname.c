#include <stdio.h>

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
	printf("%s\n", argv[argc - 1]);
	return (0);
}
