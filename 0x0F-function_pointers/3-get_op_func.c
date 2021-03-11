#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - selects appropriate function for operation
 * @s: string
 * Return: Pointer to function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int comp = 0;

	while (ops[comp].op != NULL)
	{
		if (*s == *(ops[comp]).op)
			return (ops[comp].f);
		comp++;
	}
	return (NULL);
}
