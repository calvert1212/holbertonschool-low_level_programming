#include "holberton.h"

/**
 * print_alphabet - Prints the lowercase alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	int a = 97;
	int tenX = 0;

	while (tenX <= 10)
	{
		while (a <= 122)
		{
			_putchar(a);
			a++;
		}
		tenX++;
	}
		_putchar(10);
}
