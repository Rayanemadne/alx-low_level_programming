#include "main.h"

/**
 * print_alphabet_x10 - print alphabet ten times
 *
*/

void print_alphabet_x10(void)
{
	int i, al;

	for (i = 0; i < 10; i++)
	{
		for (al = 97; al < 123; al++)
		{
			putchar(al);
		}
		putchar('\n');
	}
}
