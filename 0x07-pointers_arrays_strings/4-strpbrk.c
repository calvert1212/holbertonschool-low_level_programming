#include "holberton.h"

/**
 * _strpbrk - searches string for any of a set of bytes
 * @s: string
 * @accept: set of bytes
 * Return: pointer to matching byte in s or null if no matches found
 */

char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (y = 0; *(s + y); y++)
		for (x = 0; *(accept + x); x++)
			if (*(s + y == *(accept + x))
			    return (s + y);
			    return (0);
}
