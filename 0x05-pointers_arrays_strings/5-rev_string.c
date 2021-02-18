#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string
 * @s: the input string
 * Return: void
 */

void rev_string(char *s)
{
	char *hold = s;
	char out;

	while (*hold != 0)
		hold++
	while (hold > s)
	{
		out = *s;
		*s++ = *hold;
		*hold-- = out
	}
}
