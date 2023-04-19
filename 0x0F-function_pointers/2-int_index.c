#include "function_pointers.h"

/*RAYANE - MAD*/

/**
 * int_index -  searches for an int
 *
 * @array: the array
 * @size: the size of my...array
 * @cmp: the function to compare values
 *
 * Return: index
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j = 0;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) == 1)
			{
				j = 1;
				break;
			}
		}
	}

	if (i == size && j != 1)
	{
		return (-1);
	}

	return (i);
}
