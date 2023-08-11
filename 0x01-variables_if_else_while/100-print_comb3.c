#include <stdio.h>

/**
 * main - entery of the progarm
 * Return: 0
*/
int main(void)
{
    int i = 48, j = 48;

    while (i < 58)
    {
        j = i + 1;  
        while (j < 58)
        {
            putchar((char)i);
            putchar((char)j);
            if(i != 56)
            {
             putchar(',');
             putchar(' ');
            }
            j++;
        }
        i++;
    }
    putchar('\n');

}