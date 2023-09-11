#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - initialize dog description
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of owner
 *
 * Return: nothing
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newg;

	newg = malloc(sizeof(dog_t));
	if (newg != NULL)
	{
		newg->name = malloc(sizeof(char) * 9);
		newg->owner = malloc(sizeof(char) * 9);
	}
	else
	return (NULL);


	newg->name = name;
	newg->age = age;
	newg->owner = owner;
	return (newg);
}
