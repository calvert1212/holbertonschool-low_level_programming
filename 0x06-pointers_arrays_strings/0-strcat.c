#include "holberton.h"

char void _strcat(char *dest, char *src)
{
char *s = *src;
while(*dest != '\0')
{
dest++;
}
while(*src != '\0')
{
*dest = src;
src++;
dest++;
}
return 0;
}
