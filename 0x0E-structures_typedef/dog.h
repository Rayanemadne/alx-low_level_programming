#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

/**
 * dog_t - new type of struct
*/
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
