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
		int a = 0;
	while (a <= 9)
	{
		putchar((b) + 48);
		putchar((a) + 48);
		if (a + b != 18)
		{
			putchar(44);
			putchar(32);
		}
			a++;
	}
	b++;
	}
	putchar('\n');
	return (0);
}
