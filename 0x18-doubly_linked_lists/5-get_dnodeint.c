#include "lists.h"

/**
* get_dnodeint_at_index - get node at index
* @head: Head of the list
* @index: Index of the list
*
* Return: Given node at index, NULL on fail
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int x, i = 0;
dlistint_t *y;

y = head;
while (y != NULL)
{
x++;
y = y->next;
}

if (index > x)
return (NULL);

y = head;
for (i = 0; i < index; i++)
y = y->next;
return (y);
}
