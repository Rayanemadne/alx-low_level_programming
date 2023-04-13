#include "main.h"

/*RAYANE - MAD*/

/**
 * malloc_checked - allocate memory
 *
 * Description: allocate memory
 * @b: input of the size
 *
 * Return: pointer
*/

void *malloc_checked(unsigned int b)
{
	void *memo;

	memo = malloc(b);
	if (memo == NULL)
	{
		exit(98);
	}

	return (&memo);

}
