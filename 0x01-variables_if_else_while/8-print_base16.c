#include <stdio.h>

/**
 * main - prints a - z
 * Return: always 0
 */

int main(void)
{
	int a = 0;
	char b = 97;
	while (a <= 9)
	{
		putchar((a) + 48);
		a++;
	}

	while (b <= 102)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
