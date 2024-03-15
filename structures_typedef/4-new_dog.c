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
	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = malloc((length_name + 1) * sizeof(char));
	if (d->name == NULL)
	{
		return (NULL);
	}
	d->name = name;
	d = malloc((length_owner + 1) * sizeof(char));
	if (d->owner == NULL)
	{
		return (NULL);
	}
	d->owner = owner;
	d->age = age;
	
	for (k = 0; k <= length_name; k++)
	{
		d->name[k] = name[k];
	}
	for (l = 0; l <= length_owner; l++)
	{
		d->owner[l] = owner[l];
	}

	return (d);
}
