#include <stdio.h>

/**
 * main - entery of the progarm
 * Return: 0
*/
int main(void)
{
	int i, j, k, l, y = 0;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = i; k < 58; k++)
			{
				for (l = j + y; l < 58; l++)
				{
					putchar((char)i);
					putchar((char)j);
					putchar(' ');
					putchar((char)k);
					putchar((char)l);

					if ((i == 57) && (j == 56))
					break;

					putchar(',');
					putchar(' ');
				}
			}
		}
		if (i == 52)
		y++;
	}

	putchar('\n');
	return (0);
}
