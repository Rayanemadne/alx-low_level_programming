#include "list.h"

/**
 * print_dlistint - print integer of the list
 * @h: head of the list
 * Return: 0
*/


size_t print_dlistint(const dlistint_t *h)
{
	while (h->next != NULL)
	{
		printf("%d", h->n);
		h = h->next;
	}
	return (0);
}
