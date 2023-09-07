#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - returns a pointer to allocated space
 *
 * @b: unsigned integer
 *
 * Return: pointer
 *
 **/

int *array_range(int min, int max)
{
        int *num, n, i;
        if (min > max)
        return (NULL);

        n = max -min + 1;
        num = (int *)malloc(sizeof(int) * (n));
        for (i = 0; i < n; i++, min++)
        {
                num[i] = min;
        }

        return (num);
}