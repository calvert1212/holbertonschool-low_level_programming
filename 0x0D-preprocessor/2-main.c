#include <stdio.h>

/**
 * main - Prints name of executable from command line
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char ** argv)
{
	printf("%s\n", argv[0]);
	(void)argc;
	return 0;
}