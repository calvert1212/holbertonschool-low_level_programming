#include <stdio.h>

/**
 * main - Prints number of arguments
 * @argc: Number of arguments
 * @argv: arguments as array of strings
 * Return: 0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
