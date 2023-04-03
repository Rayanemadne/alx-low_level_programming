#include "main.h"

/**
 * _strspn - lenght of prefix sub string
 *
 * @s: input of the string
 * @accept: input of the caracteres
 *
 * Return: return lenght
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	char checker;

	for (i = 0; s[i] != '\0'; i++)
	{
		checker = 'n';
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
			checker = 'y';
			}
		}
		if (checker != 'y')
			{
			break;
			}
	}

	return (i);
}
