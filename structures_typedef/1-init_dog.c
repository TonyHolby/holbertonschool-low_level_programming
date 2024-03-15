#include "dog.h"

/**
 * init_dog - Entry point
 *
 * Description: a function that initialize a variable of type struct dog
 * @d: structure dog
 * @name: string
 * @age: float
 * @owner: string
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
