#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - Prints name from argument
 * @name: string of name
 * @f: function pointer to additional functions
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
