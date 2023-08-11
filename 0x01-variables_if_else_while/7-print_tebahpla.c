#include <stdio.h>

/**
 * main - entry to program
 * Return: 0
*/
int main(void)
{
    int n  = 122;
    while (n > 96)
    {
        putchar((char)n);
        n--;
    }
    putchar('\n');
    return (0);
}