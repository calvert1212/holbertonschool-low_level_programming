#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: head of list
 *
 * Return: Node count
 */

size_t print_dlistint(const dlistint_t *h)
{
  size_t x = 0;

  while (h != NULL)
    {
      printf("%d\n", h->n);
      x++;
      h = h->next;
    }
  return (x);
}
