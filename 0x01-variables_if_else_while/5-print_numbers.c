#include <stdio.h>

/**
 * main - prints a - z
 * Return: always 0
 */

int main(void)
{
	char a = 48;

	while (a <= 57)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
