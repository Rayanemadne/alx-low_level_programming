#include "variadic_functions.h"

/*RAYANE - MAD*/

/**
 * print_strings - print strings in the screen
 *
 * @separator: char to separat with
 * @n: the number of arguments
 *
 * Return: nothing
*/


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (!str)
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (separator && i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}
	va_end(args);

	printf("\n");
}
