#include <stdio.h>

/**
 * main - entery of the progarm
 * Return: 0
*/
int main(void)
{
    int i = 48, j = 48, k = 48;

    while (i < 58)
    {
        j = i + 1;  
        k = j +1;
        while (j < 58)
        {
            while (k < 58)
            {
              putchar((char)i);
              putchar((char)j);
              putchar((char)k);
              if(i != 55)
              {
               putchar(',');
               putchar(' ');
              }
              k++;
            }
            j++;
        }
        i++;
    }
    putchar('\n');
 return 0;
}