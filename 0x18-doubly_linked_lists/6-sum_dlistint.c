#include "lists.h"

/**
 * sum_dlistint - sum of all data
 * @head: the head of the list
 * Return: sum of the list
 */

int sum_dlistint(dlistint_t *head)
{
  int x = 0;
  dlistint_t *sum = head;

  if (sum == NULL)
    {
      return (0);
    }
  while (sum != NULL)
    {
      x += sum->n;
      sum = sum->next;
    }
  return (x);
}
