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
	dog_t *d = malloc(length_name * sizeof(char *));

	if (d == NULL)
	{
		return (NULL);
	}
	d->name = name;
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = owner;
	if (d->owner == NULL)
	{
		free(d->owner);
		free(d);
		return (NULL);
	}
	d->age = age;
	for (k = 0; name[k] != '\0'; k++)
	{
		d->name = name[k];
	}
	d->age = age;
	for (l = 0; owner[l] != '\0'; l++)
	{
		d->owner = owner[l];
	}
	return (new_dog);
}
