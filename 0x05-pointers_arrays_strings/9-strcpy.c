#include "main.h"

/**
 * _strcpy - cp string from one to another
 *
 *
 * @src: intput of the source
 * @dest: the output
 *
 * Return: Nothing
 */

char *_strcpy(char *dest, char *src)
{
	int a, b = 0;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[b] = src[a];
		b++;
	}
	dest[b] = '\0';

	return (dest);
}
