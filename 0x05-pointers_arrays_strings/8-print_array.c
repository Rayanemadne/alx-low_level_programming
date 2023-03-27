#include "main.h"

/**
 * print_array - one half
 *
 *
 * @a: array name intput
 * @n: intput array number
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
}
