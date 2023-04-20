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
	unsigned int i;
	int sum = 0;
	va_list args;

	if (n == 0)
		return (0);


	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);

}
