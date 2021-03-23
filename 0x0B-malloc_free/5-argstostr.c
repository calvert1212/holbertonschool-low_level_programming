#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

int _strlen(char *s)
{
	int i;
	for (i = 0; *s != '\0'; i++)
		s++;
	return (i);
}


char *argstostr(int ac, char **av)
{
	int i, j z = 0;
	char *p, *c;
	int size;
	
	if(ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		size += _strlen(av[i]) + 1;
	}

	x = malloc(size + 1);
	if(x == NULL)
		return (NULL);
	for (i = 0; i < ac -1; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			x[z] = av[i][j];
			z++;
		}
		x[z] = '\n';
		z++;
	}
	x[z] = '\0';
	return (x);
}
