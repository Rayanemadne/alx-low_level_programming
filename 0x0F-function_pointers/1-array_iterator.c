#include "function_pointers.h"

/*RAYANE - MAD*/

/**
 * array_iterator - pass each element of an array
 *
 * @array: the array
 * @size: the size of the array
 * @action: the function
 *
 * Retrun: nada
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	/*go to every ellement in the array and give it to the action*/
	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
