#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: input of the pointer to pointer we want to set to
 * @to: input of the string to set
 */
void set_string(char **s, char *to)
{
	*s = to;
}
