#include "variadic_functions.h"

/*RAYANE - MAD*/

/**
 * print_numbers - print number in the screen
 *
 * @separator: char to separat with
 * @n: the number of arguments
 *
 * Return: nothing
*/


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			if (i != (n - 1))
				printf("%d%s", va_arg(args, int), separator);
			else
				printf("%d", va_arg(args, int));
		}
		else
		{
			printf("%d", va_arg(args, int));
		}
	}
	va_end(args);

	printf("\n");
}
