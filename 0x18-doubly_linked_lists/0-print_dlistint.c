#include "lists.h"

/**
 * print_dlistint - prints elements of list
 * @head: head of list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *head)
{
  size_t c = 0;
  const dlistint_t *xhead = head;

  while (xhead)
    {
      printf("%d\n", xhead->n);
      c++;
      xhead = xhead->next;
    }
  return (c);
}
