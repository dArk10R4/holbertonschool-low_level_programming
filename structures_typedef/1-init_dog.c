#include <string.h>
#include <stdlib.h>

/**
 * init_dog - initialize a dog
 * @d: struct dog
 * @name: char *
 * @age: float
 * @owner: char *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = strdup(name);
	d->age = age;
	d->owner = strdup(owner);
}
