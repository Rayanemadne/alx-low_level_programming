#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: input
 *
*/

void print_diagonal(int n)
{
	int i, sp;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (sp = 1; sp <= i; sp++)
			{
				putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
