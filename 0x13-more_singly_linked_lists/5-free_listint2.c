#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 - frees all data in a list, sets head to NULL
 * @head: pointer for list
 * Return: void
 */

void free_listint2(listint_t **head)
{

if (head == NULL)
return;

listint_t *x;

while (*head)
{
x = (*head)->next;
free(*head);
*head = x;
}
head = NULL;
}
