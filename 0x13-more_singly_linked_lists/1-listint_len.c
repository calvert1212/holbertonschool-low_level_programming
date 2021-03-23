#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns number of elements in list
 * @h: list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
size_t s = 0;

while (h)
{
h = h->next;
s++;
}
return (s);
}
