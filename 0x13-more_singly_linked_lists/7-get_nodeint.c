#include "lists.h"

/* RAYANE - MAD*/

/**
 * get_nodeint_at_index - give a specific node
 * @head: head of the list
 * @index: index of the node
 *
 * Return: pointer to the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter;

	if (head == NULL)
		return (NULL);

	for (counter = 0; counter < index; counter++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}

	return (head);
}
