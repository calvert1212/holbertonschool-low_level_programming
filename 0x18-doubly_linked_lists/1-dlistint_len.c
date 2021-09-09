#include "lists.h"

/**
 * dlistint_len - returns all elements of the list
 * @head: head of list
 * Return: Number of elements in the list
 */


size_t dlistint_len(const dlistint_t *head)
{
  const dlistint_t *xhead = head;
  size_t c = 0;

  if (xhead == 0)
    {
      return (0);
    }
  while (xhead != NULL)
    {
      c++;
      xhead = xhead->next;
    }
  return (c);
}
