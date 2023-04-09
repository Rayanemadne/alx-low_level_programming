#include "main.h"

/**
 * _strchr - enemy located
 *
 * @s: input for the memory that we want
 * @c: input that we want to locate
 *
 * Return: return null if not found
*/

char *_strchr(char *s, char c)
{
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
