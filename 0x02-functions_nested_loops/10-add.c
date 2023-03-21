#include "main.h"

/**
 * add - addistion between two given numbers
 *
 *@a: first input
 *@b: second input
 *
 *Return: the addition
*/

int add(int a, int b)
{
	int sum = a + b;

	_putchar((sum / 10) + '0');
	_putchar((sum % 10) + '0');
	return (sum);
}
