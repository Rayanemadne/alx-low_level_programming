#include "dog.h"

/*RAYANE - MAD*/

/**
 * free_dog - free struct
 *
 * @d: pointer of the struct
 *
 * Return: walo
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
