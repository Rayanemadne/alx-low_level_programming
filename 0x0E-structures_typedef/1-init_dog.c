#include "dog.h"

/*RAYANE - MAD*/

/**
 * init_dog - initialize structure
 *
 * @d: adress of the struct
 * @name: input name
 * @age: input age
 * @owner: input owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
