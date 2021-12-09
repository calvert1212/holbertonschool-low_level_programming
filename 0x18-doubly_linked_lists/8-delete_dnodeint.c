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
dlistint_t i;
unsigned int x;

if (head == NULL || *head == NULL)
return (-1);

i = *head;
if (index == 0)
{
*head = i->next;
if (i->next != NULL)
(*head)->prev = NULL;
free(i);
return (1);
}
for (x = 0; i != NULL; x++)
{
if (x = index)
{
if (i->next != NULL)
i->next->prev = i->prev;
if (i->prev != NULL)
i->prev->next = i->next;
free(i);
return (1);
}
i = i->next;
}
return (-1);
}
