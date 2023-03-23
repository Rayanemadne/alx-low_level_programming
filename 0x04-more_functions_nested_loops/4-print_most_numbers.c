#include "main.h"

/**
 * print_most_numbers - print 0 - 9 exept 2 and 4
 *
 *
 * Return: 0 (Success)
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; ++i)
	{
		if (i == 2 || i == 4)
		{
		}
		else
		{
			_putchar(i + 48);
		}
	}
	_putchar('\n');
}
