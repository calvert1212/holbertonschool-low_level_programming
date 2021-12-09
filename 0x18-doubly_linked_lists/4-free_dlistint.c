#include "lists.h"

/**
* free_dlistint - Frees a list
* @head: head of list
*/

void free_dlistint(dlistint_t *head)
{
dlistint_t *i, *x;

i = head;
while (i != NULL)
{
x = i;
i = i->next;
free(x);
}
}
