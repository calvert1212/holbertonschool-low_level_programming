#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint_end - adds new node to end of a list
 * @head: pointer of pointer for list
 * @n: the data at point in list
 * Return: address of new element or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

listint_t *x, *t;

x = malloc(16);
if (x == NULL)
return (NULL);

x->n = n;
x->next = NULL;
if (*head == NULL)
*head = x;
else
{
t = *head;
while (t->next != NULL)
{
t = t->next;
}
t->next = x;
}
return (x);
}
