#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure consisting of a name, age and owner name
 * @name: dog name
 * @age: dog age
 * @owner: dog's owner's name
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
