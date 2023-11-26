#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - creates new dog
 * @name: char *
 * @age: float
 * @owner: char *
 *
 * Return: dog_t *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t n_d;

	n_d.name = strdup(name);
	n_d.age = age;
	n_d.owner = strdup(owner);

	return (&n_d);
}
