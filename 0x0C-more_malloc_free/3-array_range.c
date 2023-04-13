#include "main.h"

/*RAYANE - MAD*/

/**
 * array_range - allocate memory for an int array
 *
 * @min: input of min value
 * @max: input of max value
 *
 * Return: pointer
*/

int *array_range(int min, int max)
{
	int *ar, diff, i, j;

	/* min > max -> NULL */
	if (min > max)
		return (NULL);

	/* calculat the diferance*/
	diff = (max - min) + 1;
	/* alocat memory */

	ar = malloc(sizeof(int) * diff);
	if (ar == NULL)
		return (NULL);
	/* init the array with the range */

	for (i = 0; min <= max; i++)
	{
		ar[i] = min;
		min++;
	}

	/* return array */
	return (ar);
}
