#include <stdio.h>
#include "main.h"

/**
* leet - concatinate n string
*
* @n: pointer to character
*
* Return: character pointer
*/

char *leet(char *n)
{
	int len = 0;


	while (*n)
	{
		*n = 4 * (*n == 'a' || *n == 'A') 
		+ 3 * (*n == 'e' || *n == 'E') 
		+ 0 * (*n == 'o' || *n == 'O')
		+ 7 * (*n == 't' || *n == 'T')
		+ 1 * (*n == 'l' || *n == 'L')
		+ (*n != 'a' || *n == 'A' ||
		*n != 'e' || *n != 'E' || 
		*n != 'o' || *n != 'O' ||
		*n != 't' || *n != 'T' ||
		*n != 'l' || *n != 'L');
		n++;
		len++;
	}
	*n = '\0';
	n -= len;
	return (n);
}
