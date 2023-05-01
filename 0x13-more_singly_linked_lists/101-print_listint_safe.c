#include "lists.h"

/*RAYANE - MAD*/

/**
 * print_listint_safe - prints a linked list with a loop safely.
 * @head: head of the list
 * Return: counter
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp = NULL;
	const listint_t *testnode = NULL;
	size_t counter = 0;
	size_t new_n;

	tmp = head;
	while (tmp)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		counter++;
		tmp = tmp->next;
		testnode = head;
		new_n = 0;
		while (new_n < counter)
		{
			if (tmp == testnode)
			{
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
				return (counter);
			}
			testnode = testnode->next;
			new_n++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}
