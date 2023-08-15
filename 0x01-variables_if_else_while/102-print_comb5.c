#include <stdio.h>

/**
 * main - entery of the progarm
 * Return: 0
*/
int main(void)
{
	int i, j, k, l, tmp;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			tmp = j;
			for (k = i; k < 58; k++)
			{
				for (l = 48; l < 58; l++)
				{
					if (tmp != j)
						l = j;
					putchar((char)i);
					putchar((char)j);
					putchar(' ');
					putchar((char)k);
					putchar((char)l);

					if ((i == 57) && (j == 56))
					break;

					putchar(',');
					putchar(' ');
					tmp++;
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
