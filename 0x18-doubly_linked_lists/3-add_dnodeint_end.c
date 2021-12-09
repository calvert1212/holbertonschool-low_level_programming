#include "lists.h"

/**
* add_dnodeint_end - add node to end of a dlistint_t list
* @head: head of list
* @n: value of in node
*
* Return: address of new element
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *x, *i;

x = malloc(sizeof(dlistint_t));
if (x == NULL)
return (NULL);
x->n = n;
x->next = NULL;
x->prev = NULL;

i = *head;
if (*head == NULL)
{
*head = x;
return (x);
}
while (i->next != NULL)
{
i = i->next;
}
i->next = x;
x->prev = i;

return (x);
}
