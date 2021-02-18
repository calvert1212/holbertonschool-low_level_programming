#include <stdio.h>

/**
 *_strlen - get length of string
 * @s: the string
 * Return: the string length
*/

int _strlen(char *s)
{
	int l = 0;

	while (*(*s + l) != '\0')
		l++;
	return (l);
}
