#include "main.h"

/*RAYANE - MAD*/

/**
 * string_nconcat - concat two strings
 *
 * @s1: input of the first string
 * @s2: input of the second string
 * @n: the number of caracter to pass in s2
 *
 * Return: pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s2len, s1len, i;
	char *strc;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1len = strlen(s1);
	s2len = strlen(s2);
	strc = (char *)malloc(s1len + s2len + 1);
	if (strc == NULL)
		return (NULL);

	for (i = 0; i < s1len; i++)
		strc[i] = s1[i];

	if (s2len < n || s2len == n)
	{
		for (i = 0; i < s2len; i++)
			strc[s1len + i] = s2[i];
	}
	else
	{
		for (i = 0; i < n; i++)
			strc[s1len + i] = s2[i];
	}

	return (strc);
}
