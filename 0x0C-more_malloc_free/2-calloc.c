#include "main.h"

/*RAYANE - MAD*/

/**
 * _calloc - allocate memory
 *
 * @nmemb: input of the number
 * @size: input of the size
 *
 * Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *memo;

	/*return Null if 0*/
	if (nmemb == 0 || size == 0)
		return (NULL);

	/*allocate memory*/
	memo = malloc(nmemb * size);
	if (memo == NULL)
	{
		return (NULL);
	}

	/*init all memory to 0*/
	for (i = 0; i < nmemb * size; i++)
	{
		memo[i] = 0;
	}

	/*return pointer*/
	return (memo);
}
