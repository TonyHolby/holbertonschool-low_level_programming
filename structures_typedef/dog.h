#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - Short description
 *
 * @name: string
 * @age: float
 * @owner: string
 *
 * Description: a structure dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
