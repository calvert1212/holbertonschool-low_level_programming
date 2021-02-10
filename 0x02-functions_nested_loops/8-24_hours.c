#include"holberton.h"

/**
 * jack_bauer - print every minute of 24 hours
 *                                                                              * Return: void
 */

void jack_bauer(void)
{
	int a, b, c, d, min, hour;

	for (a = 48; a < 51; a++)
		for (b = 48; b < 58; b++)
		{
			hour = a * 10 + b;
			if (hour == 552)
			{
				a = 51;
				b = 58;
			}
			else
			{
				for (c = 48; c < 55; c++)
					for (d = 48; d < 58; d++)
					{
						_putchar(a);
						_putchar(b);
						_putchar(58);
						_putchar(c);
						_putchar(d);
						_putchar(10);
						min = c * 10 + d;
						if (min == 587)
							c = 55;
					}
			}
		}
}
