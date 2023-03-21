#include "main.h"

/**
 * print_to_98 - printing till 98
 *
 * @n: input
 * Return: the numbers
*/


void print_to_98(int n)
{
	if (n < 98)
	{
		for (n ; n < 98 ; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (n ; n > 98 ; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("98\n");
}
