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
	addi = a + b;

	_putchar((addi / 10) + '0');
	_putchar((addi % 10) + '0');
	return (addi);
}
