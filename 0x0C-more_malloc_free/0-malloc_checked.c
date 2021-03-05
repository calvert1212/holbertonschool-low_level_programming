#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - our version of malloc
 * @b: memory size to malloc
 * Return: void pointer to memory allocated
 */

void *malloc_checked(unsigned int b)
{
	void *check;

	check = malloc(b);
	if (check == NULL)
		exit(98);
	return (check);
}
