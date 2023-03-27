#include "main.h"

/**
 * _atoi - convert string to numbers
 *
 *
 * @s: intput
 *
 * Return: Nothing
 */

int _atoi(char *s)
{
	int i, len;

	for (len = 0; s[len] != '\0'; len++)
		;
	for (i = 0; i < len; i++)
	{
	if ((s[i] == 43 || s[i] == 45) && (s[i + 1] >= 48 && s[i + 1] <= 57))
	{
		putchar(s[i]);
	}
	if (s[i] >= 48 && s[i] <= 57)
	{
		putchar(s[i]);
	}
	}
}
