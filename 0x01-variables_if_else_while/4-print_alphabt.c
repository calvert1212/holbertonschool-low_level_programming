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
		if (a != 113 && a != 101)
		{
		putchar(a);
		a++;
		}
		else
			a++;
	}
	putchar('\n');
	return (0);
}
