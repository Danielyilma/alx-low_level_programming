#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int sum;

    sum = sum_them_all(4, 98, 2, 1, -4);
    printf("%d\n", sum);
    sum = sum_them_all(0);
    printf("%d\n", sum);    
    return (0);
}