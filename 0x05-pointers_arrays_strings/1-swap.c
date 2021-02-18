#include <stdio.h>
#include "holberton.h"

/**
 * swap_int - swaps two integers
 * @a: first int
 * @b: second int
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int swap;
	swap = *a;
	*a = *b;
	*b = swap;
}
