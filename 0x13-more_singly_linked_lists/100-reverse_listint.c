#include "lists.h"

/*RAYANE - MAD*/

/**
 * reverse_listint - reverses a linked list
 * @head: head of the list
 *
 * Return: pointer to the head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	/*my brain is hurting*/
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
