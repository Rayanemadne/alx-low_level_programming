#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct list_t - single linked list
 * @str: string
 * @len: length of the string
 * @next: next node
 *
*/

typedef struct list_t
{
	char *str;
	unsigned int len;
	struct list_t *next;
} list_t;

/*functions prototypes*/
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);

#endif
