#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initializes a dog structure
 * @d: the structure
 * @name: string of dog name
 * @age: float of dog age
 * @owner: string of owner name
 * Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
