#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - caculator
 *
 * @argc: integer
 * @argv: character pointer
 *
 * Return: integer
 */

int main(int argc, char *argv[])
{
	int result;
	int (*opration)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (*argv[2] != '+'
		&& *argv[2] != '-'
		&& *argv[2] != '*'
		&& *argv[2] != '/'
		&& *argv[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' && *argv[3] == '0')
	|| (*argv[2] == '%' && *argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	opration = get_op_func(argv[2]);
	result = opration(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);

	return (0);
}
