#include "main.h"

/**
 * rev_string - print a gnirts from the root
 *
 *
 * @s: intput
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i, j;
	char tmp;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (j = 0; j < i / 2; j++)
	{
		tmp = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = tmp;
	}
}
