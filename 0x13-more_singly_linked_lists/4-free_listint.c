#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - frees all data in a list
 * @head: pointer for list
 * Return: void
 */

void free_listint(listint_t *head)
{

listint_t *x;

while (head != NULL)
{
x = head->next;
free(x);
head = x;
}
}
