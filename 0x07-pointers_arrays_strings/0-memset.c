#include "holberton.h"

/**
 * _memset - fills memory buffer with constant byte
 * @s: buffer
 * @b: character
 * @n: buffer size
 * Return: character
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x;

	for (x = 0; x < n; x++)
		*(s + x) = b;
	return (s);
}
