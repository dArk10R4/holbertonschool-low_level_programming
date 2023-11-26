#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dog
 * @d: dog_t *
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
