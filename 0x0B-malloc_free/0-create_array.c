#include "main.h"

/*RAYANE - MAD*/

/**
 * create_array - creates an array of chars
 *
 * Description: creates an array and initializes it
 *
 * @size: the size of the array
 * @c: the char to initialize with
 *
 * Return: the array
*/


char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *a = malloc(size);

	a[0] = *c;

	return (&a);
}
