#include "lists.h"

/*RAYANE - MAD*/

/**
 * insert_nodeint_at_index - inserting a new node at agiven index
 * @head: head pointer
 * @idx: index
 * @n: integer
 *
 * Return: the address of new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *tmp;
	unsigned int counter;

	if (head == NULL)
		return (NULL);
	/*get the head adress*/
	/*get the location of the index*/
	if (idx != 0)
	{
		tmp = *head;
		for (counter = 0; counter < idx - 1; counter++)
		{
			tmp = tmp->next;
		}
		if (tmp == NULL)
			return (NULL);
	}
	/*allocaet space*/
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	/*if idx 0*/
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	/*give to the new one the next adress of the one above*/
	newnode->next = tmp->next;
	/*give to the last one the nest adress of the new one*/
	tmp->next = newnode;
	/*return new adress of the node*/
	return (newnode);
}
