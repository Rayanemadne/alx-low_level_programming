#include "main.h"

/**
 * _isalpha - check if the input is an alphabet
 *
 * @c: the input
 *
 * Return: 1 if alphabed if not 0
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
