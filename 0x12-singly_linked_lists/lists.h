#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

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

#endif
