#include "holberton.h"
#include <stdio.h>

/**
 * puts2 - Puts string
 * @str: input string
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar(10);
}
