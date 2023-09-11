#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - length of string
 *
 * @str: character pointer
 *
 * Return: integer
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i + 1);
}

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
	dog_t *newdg;

	newdg = malloc(sizeof(dog_t));

	if (!newdg)
	return (NULL);

	newdg->name = malloc(sizeof(char) * 9);
	newdg->owner = malloc(sizeof(char) * 9);

	if (!newdg->name)
	{
		free(newdg);
		free(newdg->name);
		return (NULL);
	}
	if (!newdg->owner)
	{
		free(newdg);
		free(newdg->name);
		return (NULL);
	}

	newdg->name = name;
	newdg->age = age;
	newdg->owner = owner;

	return (newdg);
}

