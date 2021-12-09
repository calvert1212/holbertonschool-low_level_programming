#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete node at target
 * @head: Pointer to head of the list
 * @index: Target node to delete
 *
 * Return: 1 on success, else -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *x = NULL;
unsigned int i = 0;

if (!head || !*head)
return (-1);
x = *head;
if (!index)
{
*head = x->next;
if (x->next)
x->next->prev = NULL;
free(x);
}
else
{
while (x && i < index)
x = x->next, i++;
if (!x)
return (-1);
if (x->next)
x->next->prev = x->prev;
x->prev->next = x->next;
free(x);
}
return (1);
}
