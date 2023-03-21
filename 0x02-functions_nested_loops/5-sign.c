#include "main.h"

/**
 * print_sign - check if a number is + or - or equal to 0
 *
 * @n: the number input
 *
 * Return: if > 0 the return is 1 if its (= 0) so its 0 id its (< 0) so its -1
*/

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	if (n == 0)
	{
		putchar('0');
		return (0);
	}
	if (n < 0)
	{
		putchar('-');
		return (-1);
	}
}
