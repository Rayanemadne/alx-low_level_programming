#include "main.h"

/**
 * puts_half - one half
 *
 *
 * @str: intput
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int i, len;

	for (len = 0; str[len] != '\0'; len++)
		;

	if ((len % 2) == 0)
	{
	for (i = (len / 2); i < len; i++)
	{
	putchar(*(str + i));
	}
	}
	else
	{
	for (i = ((len - 1) / 2) + 1; i < len; i++)
	{
	putchar(*(str + i));
	}
	}

	putchar('\n');
}
