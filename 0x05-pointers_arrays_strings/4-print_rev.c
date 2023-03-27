#include "main.h"

/**
 * print_rev - print a gnirts
 *
 *
 * @s: intput
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	;
	i--;
	for (i; i >= 0; --i)
	_putchar(s[i]);

	_putchar('\n');
}
