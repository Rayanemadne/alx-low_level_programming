#include "main.h"

/*RAYANE - MAD*/

/**
 * str_concat - concatenator
 *
 * Description: concatenates two strings
 *
 * @s1: input of the first string
 * @s2: input of the first string
 *
 * Return: a pointer
*/


char *str_concat(char *s1, char *s2)
{
	char *cc;
	int l1, l2, i;

	l1 = strlen(s1);
	l2 = strlen(s2);

	cc = malloc(l1 + l2 + 1);

	for (i = 0; i < l1; i++)
	{
		cc[i] = s1[i];
	}
	for (i = 0; i < l2; i++)
	{
		cc[l1 + i] = s2[i];
	}

	return (cc);
}
