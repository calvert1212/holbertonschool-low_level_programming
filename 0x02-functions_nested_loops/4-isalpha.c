#include "holberton.h"

/**
 * _isalpha - checks if character is alphabet
 * @c: character
 * Return: 1 on success, else 0
 */

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}
