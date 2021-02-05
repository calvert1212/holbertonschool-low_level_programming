#include <stdio.h>

/**
 * main - prints a - z
 * Return: always 0
 */

int main(void)
{
	int b = 0;

	while (b <= 9)
	{
		int a = b + 1;

		while (a <= 9)
	{
		int c = a + 1;

		while (c <= 9)
		{
		putchar((b) + 48);
		putchar((a) + 48);
		putchar((c) + 48);
		if (a + b + c != 24)
		{
			putchar(44);
			putchar(32);
		}
		c++;
		}
			a++;
	}
	b++;
	}
	putchar('\n');
	return (0);
}
