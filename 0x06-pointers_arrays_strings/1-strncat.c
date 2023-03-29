#include "main.h"

/**
 * _strncat - concact tow strings and using n input
 *
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 * @n: input
 *
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i])
		i++;

	for (j = 0; i < n && src[j] != '\0' ; j++)
		dest[i + j] = src[j];

	dest[i + j] = '\0';
	return (dest);
}
