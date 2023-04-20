#include "variadic_functions.h"

/*RAYANE - MAD*/

/**
 * sum_them_all - give the sum
 *
 * @n: number of args
 *
 * Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);


	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		sum += x;
	}

	va_end(args);

	return (sum);

}