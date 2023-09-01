#include <stdio.h>
#include <stdlib.h>

/**
 * coin_count - counts minimum number of coin needed
 *
 * @money: integer number of the money
 *
 * @count: number of coin needed
 *
 * Return: integer number of coin
 *
 */
int coin_count(int money, int count)
{
	if (money >= 25)
	{
		count++;
		return (coin_count(money - 25, count));
	}
	if (money >= 10 && money < 25)
	{
		count++;
		return (coin_count(money - 10, count));
	}
	if (money >= 5 && money < 10)
	{
		count++;
		return (coin_count(money - 5, count));
	}
	if (money >= 2 && money < 5)
	{
		count++;
		return (coin_count(money - 2, count));
	}
	if (money >= 1 && money < 2)
	{
		count++;
		return (coin_count(money - 1, count));
	}
	if (money == 0)
	{
		return (count);
	}
	return (count);
}

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
	int count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if ((atoi(argv[1]) < 0))
	{
		printf("0\n");
	}
	else
	{
		printf("%d\n", coin_count(atoi(argv[1]), count));
	}
	return (0);
}
