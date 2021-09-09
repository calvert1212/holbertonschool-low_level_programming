include "lists.h"

/**
 * add_dnodeint - adds node to end of list
 * @n: element index
 * @head: head of list
 * Return: address of the new element
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
  dlistint_t *xnode = malloc(sizeof(dlistint_t));

  if (xnode == NULL)
    {
      return (NULL);
    }
  xnode->prev = NULL;
  xnode->next = *head;
  xnode->n = n;
  if (*head != NULL)
    {
      (*head)->prev = new;
    }
  *head = new;
  return (new);
}
