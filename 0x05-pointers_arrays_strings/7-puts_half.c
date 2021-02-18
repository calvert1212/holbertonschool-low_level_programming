#include "holberton.h"
#include <stdio.h>

/**
 * puts_half - Prints half the string
 * @str: the string
 * Return: void
 */

void puts_half(char *str)
{
	int i, r = 0;

	while (str[r] != '\0')
		r++;
	r++;
	if (r % 2 != 0)
		r = (r - 1) / 2;
	else
		r = r / 2;
	for (i = r; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar(10);
}
