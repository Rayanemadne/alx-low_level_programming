#include "lists.h"

/*RAYANE - MAD*/

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
	list_t *newnode;
	size_t strlen = 0;

	/*set string length to 0 if its NULL*/
	if (str == NULL)
		strlen = 0;

	/*count length of string*/
	while (str[strlen] != '\0')
		strlen++;

	newnode = malloc(sizeof(list_t));
	/*if it fail*/
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = strlen;
	if (*head == NULL)
		newnode->next = NULL;
	else
		newnode->next = *head;
	*head = newnode;

	return (*head);
}
