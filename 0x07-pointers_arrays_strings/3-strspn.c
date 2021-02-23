#include "holberton.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: string
 * @accept: substring
 * Return: destination buffer
 */

unsigned int _strspn(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (i = 0; accept[y] != '\0'; y++)
			if (s[x] == accept[y])
				break;
	if(!(accept[y]))
		break;
	}
	return (x);
}
