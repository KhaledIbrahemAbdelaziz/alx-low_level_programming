#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog.
 * @d: A pointer to struct dog.
 * @name: Name of dog.
 * @age: Age of dog.
 * @owner: Owner of the dog.
 * Return: nothing to return.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
