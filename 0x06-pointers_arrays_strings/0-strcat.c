#include "main.h"

/**
 * _strcat - concact tw strings
 *
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: @dest
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i])
		i++;

	for (j = 0; src[j] ; j++)
		dest[i++] = src[j];

	return (dest);
}
