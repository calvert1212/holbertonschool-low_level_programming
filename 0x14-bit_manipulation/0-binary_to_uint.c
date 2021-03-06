#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * binary_to_uint - Converts a binary number to unsigned int
 * @b: char of the binary number to convert
 * Return: converted number, or 0 if there is one or more
 * chars in the string
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int x = 0;
int count = 1;
int i = 0;

if (b == NULL)
return (0);
while (b[i] != '\0')
i++;
i--;
while (i >= 0)
{
if (b[i] != 48 && b[i] != 49)
return (0);

if (b[i] == 49)
x += count;
count = count << 1;
i--;
}
return (x);
}
