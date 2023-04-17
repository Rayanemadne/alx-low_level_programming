#include "dog.h"

/*RAYANE - MAD*/

/**
 * new_dog - allocate new dog
 *
 * @name: input name
 * @age: input age
 * @owner: input owner
 *
 * Return: Pointer
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	/*if nothing is pased*/
	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}

	/*allocate dog type dog*/
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	/*allocate name*/
	dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	/*allocate owner*/
	dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	/*copy everything*/
	dog->name = strcpy(dog->name, name);
	dog->age = age;
	dog->owner = strcpy(dog->owner, owner);

	/*return struct*/
	return (dog);
}
