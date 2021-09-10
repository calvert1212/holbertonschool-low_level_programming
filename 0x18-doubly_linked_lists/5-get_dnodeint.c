#include "lists.h"

/**
 * get_dnodeint_at_index - get node by index
 * @head:list
 * @index:index of element
 * Return: element by index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
  unsigned int i;

  for (i = 0; i < index && head->next; i++)
    {
      head = head->next;
    }
  if (i < index)
    return (NULL);
  return (head);
}
