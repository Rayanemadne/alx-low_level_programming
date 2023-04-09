#include "main.h"

/**
 * _islower - check if a caracter is loercase
 *
 * @c: take the caracter
 *
 * Return: if its lowercase 1 if not 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
