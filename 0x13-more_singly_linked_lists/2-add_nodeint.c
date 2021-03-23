#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint - adds new node to beginning of a list
 * @head: pointer of pointer for list
 * @n: the data at point in list
 * Return: address of new element or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

listint_t *x;
x = *head;
x = malloc(64);
if (x == NULL)
return (NULL);
x->n = n;
x->next = *head;
*head = x;
return (*head);
}
