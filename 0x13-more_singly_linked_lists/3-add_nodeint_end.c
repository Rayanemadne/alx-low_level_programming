#include "lists.h"

/*RAYANE - MAD*/

/**
 * add_nodeint_end - add a node at the end
 *
 * @head: head of the list
 * @n: integer
 *
 * Return: location of the head
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *tmp;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	tmp = *head;
	newnode->n = n;

	if (tmp == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;

		tmp->next = newnode;
	}


	return (*head);
}
