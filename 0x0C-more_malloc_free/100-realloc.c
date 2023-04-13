#include "main.h"

/*RAYANE - MAD*/

/**
 * _realloc - reallocate memory
 *
 * @ptr: input of the pointer
 * @old_size: the old size
 * @new_size: the new size
 *
 * Return: pointer
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *newmemo, *tmp;

	/* the same alocation*/
	if (new_size == old_size)
		return (ptr);

	/* no old alocation*/
	if (ptr == NULL)
	{
		newmemo = malloc(new_size);
		if (newmemo == NULL)
			return (NULL);
		free(ptr);
		return (newmemo);
	}

	/* no new size*/
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	newmemo = malloc(new_size);
	if (newmemo == NULL)
		return (NULL);
	/* copy ptr to new one */
	tmp = ptr;
	for (i = 0; i < old_size; i++)
		newmemo[i] = tmp[i];

	/* freeing ptr*/
	free(ptr);
	/*return new alocation*/

	return (newmemo);
}
