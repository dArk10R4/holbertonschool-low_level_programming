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
	dog_t *n_d;

	n_d = malloc(sizeof(dog_t));

	if (n_d == NULL)
	{
		free(n_d);
		return (NULL);
	}

	n_d->name = malloc(strlen(name) * sizeof(char));

	if (n_d->name == NULL)
	{
		free(n_d);
		return (NULL);
	}

	n_d->owner = malloc(sizeof(char) * (strlen(owner) + 1));

	if (n_d->owner == NULL)
        {
		free(n_d->name);
                free(n_d);
                return (NULL);
        }

	strcpy(n_d->name, name);
	n_d->age = age;
	strcpy(n_d->owner, owner);

	return (n_d);
}
