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
	unsigned int i;
	char *a;

	if (size == 0)
	{
		return (NULL);
	}
	
	a = malloc(size);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
