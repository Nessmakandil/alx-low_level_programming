#include "dog.h"

/**
 * init_dog - initialize struct.
 *
 * @d: pointer to struct dog.
 * @name: input name.
 * @age: input age.
 * @owner: input name.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
