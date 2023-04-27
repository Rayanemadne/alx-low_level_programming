#include "lists.h"

/*RAYANE - MAD*/

/**
 * free_list - free malloc
 *
 * @head: pointer
 *
 * Return: nada
*/

void free_list(list_t *head)
{
	list_t *tmp;


	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
