#ifndef DOG_H
#define DOG_H
#define dog_t dog
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

/**
 * dog_t - different name for dog structure
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
