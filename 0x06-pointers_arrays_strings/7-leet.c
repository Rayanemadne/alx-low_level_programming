#include "main.h"

/**
 * leet - encodes a string into 1337 (no noob alowed)
 *
 * @s: string input
 *
 * Return: @s
*/

char *leet(char *s)
{
	int i, j;
	int alphalow[] = {97, 101, 111, 116, 108};
	int alphaupp[] = {65, 69, 79, 84, 76};
	int n1337[] = {52, 51, 48, 55, 49};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == alphalow[j] || s[i] == alphaupp[j])
			{
				s[i] = n1337[j];
				break;
			}
		}
	}
	return (s);
}
