#include "lists.h"

/**
* add_dnodeint - Adds new node to the beginning of a list
* @head: The head of the list
* @n: Node index
*
* Return: address of new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *x;

x = malloc(sizeof(dlistint_t));
if (x == NULL)
return (NULL);
x->n = n;
x->prev = NULL;

if (*head == NULL)
{
x->next = NULL;
*head = x;
return (x);
}
x->next = *head;
(*head)->prev = x;
*head = x;

return (x);
}
