#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies arguments and prints result
 * @argc: Number of arguments
 * @argv: Array of the arguments
 * Return: Either the result of operations or 0
 */

int main(int argc, char *argv[])
{
	int i, x = 1;

	if (argc > 2)
	{
		while (i < argc)
		{
			x = x *atoi(argv[i]);
			i++;
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", x);
	return (0);
}
