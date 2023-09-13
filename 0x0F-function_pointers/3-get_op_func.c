#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - return function pointer
 *
 * @s: character pointer
 *
 *
 * Return: function pointer
 **/
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
			{"+", op_add},
			{"-", op_sub},
			{"*", op_mul},
			{"/", op_div},
			{"%", op_mod},
			{NULL, NULL}
		};

	while (i < 5)
	{
		if (ops[i].op[0] == (*s))
		return (ops[i].f);

		i++;
	}
	return (NULL);
}
