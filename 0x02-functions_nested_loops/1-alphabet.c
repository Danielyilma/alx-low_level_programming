#include <stdio.h>
void print_alphabet(void);
/**
 * print_alphabet - print alphabet from start to end
 * @void: no parameter
 * Return: void
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		printf("%c", (char)i);
	}
	printf("\n");
}
