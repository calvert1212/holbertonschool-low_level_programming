#include <stdio.h>

/**
 * main - prints a - z
 * Return: always 0
 */

int main(void)
{
	char a = 97;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}

	a = 65;

	while (a <= 90)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
