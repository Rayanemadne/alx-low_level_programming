#include "main.h"

/*RAYANE - MAD*/

/**
 * _strdup - copy string
 *
 * Description: allocated space in memory,
 * which contains a copy of the string given
 *
 * @str: input of the string
 *
 * Return: a pointer
*/


char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	unsigned int len = strlen(str);
	int i;
	char *cp;

	cp = malloc(len + 1);
	if (cp == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		cp[i] = str[i];
	}

	return (cp);
}
