include "lists.h"

/**
 * free_dlistint - frees list
 * @head: head of the list
 * Return:void
 */
void free_dlistint(dlistint_t *head)
{
  dlistint_t *start, *check;

  start = head;

  while (start != NULL)
    {
      check = start->next;
      free(start);
      start = check;
    }
}
