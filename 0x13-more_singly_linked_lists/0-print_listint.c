#include "lists.h"

/**
 * print_listint - print each int of the list
 *
 * @h: head of the list
 *
 * Return: counter
*/

size_t print_listint(const listint_t *h)
{
	size_t counter = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	printf("%d\n", h->n);
	return (counter);
}
