#include "holberton.h"

/**
 * strchr - locates character in a string
 * @s: string
 * @c: character
 * Return: pointer to first occurence of character, else 0
 */

char *_strchr(char *s, char c)
{
	while (*s != c)
		if (!*s++)
			return (0)
				return (s);
}
