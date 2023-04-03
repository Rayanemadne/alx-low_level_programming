#include "main.h"

/**
 * _strchr - enemy located
 *
 * @s: input for the memory that we want
 * @c: input that we want to locate
 *
 * Return: return s
*/

char *_strchr(char *s, char c)
{
	unsigned int i, n;

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c)
	{
		return (s);
	}

	return ('\0');
}
