#include <stdio.h>

/**
 * main - prints a - z
 * Return: always 0
 */

int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		putchar((a) + 48);
		a++;
	}
	putchar('\n');
	return (0);
}
