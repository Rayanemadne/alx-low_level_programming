#include "main.h"

/**
 * print_diagsums - the sum of the diagonal of an 2D array
 *
 * @a: input of the array
 * @size: do realy need to tel what it is ? the size man
 *
*/

void print_diagsums(int *a, int size)
{
	unsigned int Lsum = 0, Rsum = 0, i;

	for (i = 0; i < size; i++)
	{
		Lsum += a[(size * i) + i];
		Rsum += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", Lsum, Rsum);
}
