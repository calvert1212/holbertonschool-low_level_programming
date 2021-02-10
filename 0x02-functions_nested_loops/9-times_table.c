#include"holberton.h"

/**
 * times_table - print the 9 times table
 * Return: void
 */

void times_table(void)
{
	int a, b, x, y;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			x = a * b;
			if (x > 9)
			{
				y = x - (x % 10);
				_putchar((y / 10) + '0');
				_putchar((x % 10) + '0');
			}
			else
				_putchar(x + '0');
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (a * (b + 1) < 10)
					_putchar(' ');
			}
		}
		_putchar(10);
	}
}
