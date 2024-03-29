#include "main.h"

/**
 * _strlen - Returns string length
 * @s: string s
 * Return: string length
 */

size_t _strlen(char *s)
{
  ssize_t len;

  len = 0;

  while (*s)
    {
      len++;
      s++;
    }

  return (len);
}
