#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints values in dog structure with newlines
 * @d: the dog structure
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
	}
}
