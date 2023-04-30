#include "lists.h"

/*RAYANE - MAD*/

/**
 * listint_len - number of element
 *
 * @h: head of the list
 *
 * Return: number of element
*/

size_t listint_len(const listint_t *h)
{
	size_t len = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->n != '\0')
			len++;

		h = h->next;
	}

	return (len);
}
