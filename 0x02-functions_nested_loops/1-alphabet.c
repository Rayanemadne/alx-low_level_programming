#include "main.h"

/**
 * print_alphabet - print lowercase alphabet
 *
*/

void print_alphabet(void)
{
	int al;

	for (al = 97 ; al < 123; al++)
	{
		putchar(al);
	}
	putchar('\n');
}
