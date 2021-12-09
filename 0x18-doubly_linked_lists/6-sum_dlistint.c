#include "lists.h"

/**
* sum_dlistint - Gives sum of all data
* @head: head of list
*
* Return: Sum of all data in list, 0 if none
*/

int sum_dlistint(dlistint_t *head)
{
int s = 0;

if (head == NULL)
return (0);

while (head != NULL)
{
s += head->n;
head = head->next;
}

return (s);
}
