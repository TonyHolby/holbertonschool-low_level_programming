#include "dog.h"

/**
 * free_dog - Entry point
 *
 * Description: a function that frees dogs
 * @d: type dog 
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
