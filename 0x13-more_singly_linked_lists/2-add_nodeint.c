#include "lists.h"

/*RAYANE - MAD*/

/**
 * add_nodeint - add a node at the beginning
 *
 * @head: head of the list
 * @n: integer
 *
 * Return: new location of the head
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	/*create new node*/
	/*allocate memory*/
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	/*define the node*/
	newnode->n = n;
	if (*head == NULL)
		newnode->next = NULL;
	else
		newnode->next = *head;
	/*give the adress of the new head*/
	*head = newnode;
	/*return head*/
	return (*head);
}
