#include "main.h"

/**
 * _abs - abolute number
 *
 * @n: input
 *
 * Return: return the absolute number
*/
int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	_putchar(n);
}
