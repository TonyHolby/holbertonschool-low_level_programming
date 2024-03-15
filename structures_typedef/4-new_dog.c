#include "dog.h"

/**
 * new_dog - Entry point
 *
 * Description: a function that creates a new dog
 * @name: string
 * @age: float
 * @owner: string
 *
 * Return: the value of new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k, l, length_name = 0, length_owner = 0;
	dog_t *d = NULL;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
	{
		length_name++;
	}
	for (j = 0; owner[j] != '\0'; j++)
	{
		length_owner++;
	}
	d = malloc(sizeof(dog_t *));
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	d->name = malloc(length_name * sizeof(dog_t));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->name = name;
	d = malloc(length_owner * sizeof(dog_t *));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->owner = owner;
	d->age = age;
	
	for (k = 0; name[k] != '\0'; k++)
	{
		d->name[k] = name[k];
	}
	for (l = 0; owner[l] != '\0'; l++)
	{
		d->owner[l] = owner[l];
	}

	return (d);
}
