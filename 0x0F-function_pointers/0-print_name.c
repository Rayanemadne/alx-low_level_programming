#include "main.h"

/**
 * print_name - print the name
 *
 * @name: input of the name
 * @f: input pointer of a function
 *
 * Return: nada
*/

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
