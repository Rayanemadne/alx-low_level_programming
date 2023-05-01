#include "lists.h"

/*RAYANE - MAD*/

/**
 * sum_listint - sum of all the data
 * @head: head of the list
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head->next != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
