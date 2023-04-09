#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: input of the string
 * @needle: input of the substring
 *
 * Return: beginning of the located substring
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return ('\0');
}
