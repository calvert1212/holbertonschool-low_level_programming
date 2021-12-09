#include "lists.h"

/**
* dlistint_len - returns the number of elements in a dlistint_t list
* @h: head of the doubly linked list
*
* Return: Number of elements in the linked list
*/

size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *x;
int l = 0;

x = h;

while (x != NULL)
{
l++;
x = x->next;
}
return (l);
}
