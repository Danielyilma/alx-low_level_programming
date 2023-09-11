#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - initialize dog description
 *
 * @d: struct dog
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	free(d);
}
