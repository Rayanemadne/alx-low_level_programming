#include "main.h"

/**
 * _memset - change a char with another in the memory
 *
 * @s: input for the memory that we want
 * @b: input that we want to change with
 * @n: the lenght of the memory
 *
 * Return: return s
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
