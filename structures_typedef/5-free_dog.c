#include "dog.h"

/**
 * free_dog - Entry point
 *
 * Description: a function that frees dogs
 * @d: type dog
 *
 * Return: 
 */

void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
