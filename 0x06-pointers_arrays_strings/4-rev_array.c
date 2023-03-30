#include "main.h"

/**
 * reverse_array - reverses an array of integers
 *
 * @a: pointer to int array
 * @n: is the number of elements to swap
 *
 * Return: nothing
*/

void reverse_array(int *a, int n)
{
	int temp, s, ln;

	s = 0;
	ln = n - 1;

	while (s < ln)
	{
		temp = a[s];
		a[s] = a[ln];
		a[ln] = temp;
		s++;
		ln--;
	}
}
