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
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
