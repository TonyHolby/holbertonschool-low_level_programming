#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>

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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
