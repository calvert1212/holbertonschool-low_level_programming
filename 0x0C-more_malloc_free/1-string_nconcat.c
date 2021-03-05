#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Gets string length
 * Return: Length of string in integer
 */

int _strlen(char *s)
{
	int x =0;
	while (s[x] != '\0')
		x++;
	return (x);
}

/**
 * string_nconcat - Concatentates two strings
 * @s1: First string
 * @s2: Second string
 * @n: number of bytes to concat from beginning of s2
 * Return: Pointer to result string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int s1l, s2l;
	unsigned int x, y = 0;
	int s3l;
	char nole = '\0';

	if (s1 == NULL)
		s1 = &nul;

	if (s2 == NULL)
		s2 = &null;

	if (s2l <= n)
		s3l = s2l + s3l;
	else
		s3l = s1l + n;

	s3 = malloc(s3l + 1);
	if (s3 == NULL)
		return (NULL);
	while (s1[x] != '\0')
		s3[y + 1] = s1[x + 1];
	while (s2[x] != '\0' && n-- != 0)
		a[y++] = s2[x++];
	s3[y] = '\0';

	return (s3);
}
