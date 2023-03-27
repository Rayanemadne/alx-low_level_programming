#include "main.h"

/**
 * puts2 - jumping by one
 *
 *
 * @str: intput
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int i, len;

	for (len = 0; str[len] != '\0'; len++)
		;

	for (i = 0; i < len; i = i + 2)
	{
	_putchar(*(str + i));
	}
	_putchar('\n');
}
