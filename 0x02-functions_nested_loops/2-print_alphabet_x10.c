#include "holberton.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet ten times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{

	int tenX = 0;

	while (tenX <= 10)
	{
		int a = 97;

		while (a <= 122)
		{
			_putchar(a);
			a++;
		}
		_putchar(10);
		tenX++;
	}
}
