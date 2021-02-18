#include <stdio.h>
#include "holberton.h"

/**
 * _puts - prints an input string and new line
 * @str: input string
 * Return: void
 */

void _puts(char *str)
{
	int count = 0;
	while (*(str + count) != '\0')
	{
		_putchar(*(str + count));
		count++;
	}
	_putchar (10);
}
