#include "holberton.h"

/**
 * _memcpy - copies memory from one buffer to another
 * @src: source buffer
 * @dest: destination buffer
 * @n: buffer size
 * Return: destination buffer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x;

	for (x = 0; x < n; x++)
		*(dest + x) = *(src + x);
	return (dest);
}
