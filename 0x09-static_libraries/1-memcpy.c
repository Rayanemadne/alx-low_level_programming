#include "main.h"

/**
 * _memcpy - change a char with another in the memory by copying it
 *
 * @dest: input for the memory that we want
 * @src: input that we want to copy with
 * @n: the lenght of the memory
 *
 * Return: return s
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
