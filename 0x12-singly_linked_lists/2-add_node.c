#include "lists.h"
#include <string.h>

/**
 * add_node - adds a node
 *
 * @head: pointer at the head
 * @str: string
 *
 * Return: the new node
*/


list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));

	newnode->str = strdup(str);
	newnode->len = strlen(str);
	if (*head == NULL)
		newnode->next = NULL;
	else
		newnode->next = *head;
	*head = newnode;

	return (*head);
}
