#include "main.h"

int tmp_prime(int n, int i);

/**
 * is_prime_number - says if an integer is a prime number or not
 *
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number and 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (tmp_prime(n, n - 1));
}
/**
 * tmp_prime - see if a number is prime or not
 *
 * @n: input of the number
 * @i: input of the number - 1
 *
 * Return: 1 if n is a prime number and 0 if not
*/

int tmp_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (tmp_prime(n, i - 1));
}
