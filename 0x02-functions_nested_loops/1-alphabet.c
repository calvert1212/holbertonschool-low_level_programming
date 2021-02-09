#include "holberton.h"

/**
 * main - Prints lowercase alphabet
 *
 * Return: lowercase alphabet
 */
void print_alphabet(void)
{
	int a = 97;
		while (a <= 122)
		{
			_putchar(a);
			a++;
		}
		_putchar(10);
}
