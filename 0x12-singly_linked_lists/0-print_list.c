#include "lists.h"

/**
 * print_list - print and count nodes
 *
 * @h: the head of the single linked list
 *
 * Return: count
*/

size_t print_list(const list_t *h)
{
	size_t counter = 1;

	/*if no node*/
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		counter++;
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}

	printf("[%u] %s\n", h->len, h->str);

	return (counter);

}
