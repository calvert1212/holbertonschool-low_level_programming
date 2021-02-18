#include "holberton.h"
#include <stdio.h>

/**
 * print_rev - Prints string in reverse
 * @s: the input string
 * Return: void
 */

void print_rev(char *s)
{

	int count = 0;

	while (*(s + count) != '\0')
		count++;
	while (count >= 0)
	{
		_putchar(*(s + count));
	count--;
	}
	_putchar(10);
}
