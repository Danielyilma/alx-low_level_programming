#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints name
 *
 * @name: character pointer
 * @f: function pointer
 *
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;
	f(name);
}
