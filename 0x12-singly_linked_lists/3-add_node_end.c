#include "lists.h"

/*RAYANE - MAD*/

/**
 * add_node_end - adds a node at the end
 *
 * @head: pointer to the header
 * @str: string to add
 *
 * Return: pointer to the header
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *tmp;
	size_t strlen = 0;

	/*calculate str lenght */
	if (str == NULL)
		strlen = 0;

	/*count length of string*/
	while (str[strlen] != '\0')
		strlen++;

	/*allocate space and check if null*/
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	/*copy the str and fill the node*/
	newnode->str = strdup(str);
	newnode->len = strlen;
	newnode->next = NULL;

	/*go to the end of the list by finding null*/
	tmp = *head;

	/*if no head*/
	if (tmp == NULL)
		*head = newnode;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newnode;
	}

	/*return the new node*/
	return (*head);
}
