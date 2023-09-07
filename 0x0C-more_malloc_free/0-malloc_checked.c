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

void *malloc_checked(unsigned int b)
{
        void *memory;

        memory = malloc(b);

        if (memory == NULL)
        exit (98);
        return (memory);
}