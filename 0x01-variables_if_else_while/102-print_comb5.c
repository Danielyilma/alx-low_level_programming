#include <stdio.h>

/**
 * main - entery of the progarm
 * Return: 0
*/
int main(void)
{
    int i, j, k, l;
    for (i = 48; i < 58; i++)
    {
        for (j = 48; j < 58; j++)
        {
            for (k = 48; k < 58; k++)
            {
                for(l = 48; l < 58; l++)
                {
                    putchar((char)i);
                    putchar((char)j);
                    putchar(' ');
                    putchar((char)k);
                    putchar((char)l);
                   // if(i != 57 && j != 56)
                   // {
                        putchar(',');
                        putchar(' ');
                  //  }
                }
            }
        }
    }
    putchar('\n');
 return 0;
}