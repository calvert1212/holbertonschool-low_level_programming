#include "lists.h"

/**
 * reverse_listint - reverse list
 * @head: start of list
 * Return: reversed string
 */

listint_t *reverse_listint(listint_t **head)
{
  listint_t *prev = *head, *next = head->next;

  prev->next = NULL;
  while (next != NULL)
    {
      *head = next;
      next = head->next;
      head->next = prev;
      prev = *head;
    }
  next->next = *head;
  return (next);
}
