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
	diff = max - min;
	/* alocat memory */

	ar = malloc(sizeof(int) * diff + 1);
	if (ar == NULL)
		return (NULL);
	/* init the array with the range */

	j = min;
	for (i = 0; j <= max; i++)
	{
		ar[i] = j;
		j++;
	}

	/* return array */
	return (ar);
}
