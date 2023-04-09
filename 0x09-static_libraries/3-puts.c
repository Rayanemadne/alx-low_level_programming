#include "main.h"

/**
 * _puts - print a string
 *
 *
 * @str: intput
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	for (str = str; *str != '\0'; str++)
	{
	_putchar(*str + 0);
	}
	_putchar('\n');
}
