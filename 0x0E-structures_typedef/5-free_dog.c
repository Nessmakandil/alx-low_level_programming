#include "dog.h"
/**
 * free_dog - free dog.
 *
 * @d: pointer of the dog
 *
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
