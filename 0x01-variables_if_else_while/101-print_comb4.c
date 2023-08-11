#include <stdio.h>

/**
 * main - entery of the progarm
 * Return: 0
*/
int main(void)
{
    for (int i = 48; i < 58; i++)
    {
        for (int j = i+1; j < 58; j++)
        {
            for (int k = j+1; k < 58; k++)
            {
              putchar((char)i);
              putchar((char)j);
              putchar((char)k);
              if(i != 55)
              {
               putchar(',');
               putchar(' ');
              }
            }
        }
    }
    putchar('\n');
 return 0;
}