#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds integers passed as arguments
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: Sum of arguments, or 1 on error
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int x, y;

	if (argc >= 2)
	{
		for (x = 1; x < argc; x++)
			{
				for (y = 0; argv[x][y] != 0; y++)
				{
					if (!isdigit(argv[x][y]))
					{
						printf("Error\n");
						return (1);
					}
				}
				sum += atoi(argv[x]);
			}
	}
		else
		{
			printf("0\n");
			return (0);
		}
		printf("%d\n", sum);
		return (0);
}
