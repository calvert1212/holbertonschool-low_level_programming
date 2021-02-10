#include"holberton.h"

/**
 * print_last_digit - print the last digit of an int
 * @n: integer
 * Return: result
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	_putchar(last);
	return (last);
}
