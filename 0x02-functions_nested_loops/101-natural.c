#include <stdio.h>

/**
	* main - prints sum of multiple of 3 | 5
 * Return: 
*/

int main()
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
}
