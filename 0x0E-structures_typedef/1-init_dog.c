#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize dog description
 *
 * @d: struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of owner
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
