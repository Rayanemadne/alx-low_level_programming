#include "lists.h"

/*RAYANE - MAD*/

/**
 * free_listint2 - frees the allocat memory
 * @head: head of the list
 * Return: nada
 */


void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
