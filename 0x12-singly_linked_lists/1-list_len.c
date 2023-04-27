#include "lists.h"

/*RAYANE - MAD*/

/**
 * list_len - count the number of nodes
 *
 * @h: pointer
 *
 * Return: the coint
*/

size_t list_len(const list_t *h)
{
	size_t counter = 1;

	/*if head is null*/
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		h = h->next;
		counter++;
	}

	return (counter);
}
