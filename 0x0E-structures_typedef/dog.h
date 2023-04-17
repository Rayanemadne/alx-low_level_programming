#ifndef DOG_H
#define DOG_H

#include <stdio.h>
/**
 * struct dog - structur of a new dog
 *
 * @name: the name
 * @age: the age
 * @owner: name of the owner
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
