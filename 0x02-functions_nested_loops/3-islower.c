#include "holberton.h"
/**
 * _islower - checks if character is lowercase
 * @c: the character
 * Return: 1 on success, else 0
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
