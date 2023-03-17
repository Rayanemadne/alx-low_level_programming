#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - LastDigito
 *
 * Description: take the last digit of a random number
 *
 * Return: 0 (Success)
*/

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	ldigit = n % 10;
	
	if( ldigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ldigit);
	}
	else if ( ldigit < 6 && ldigit != 0 )
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ldigit);
	}
	else if ( ldigit == 0 )
	{
		printf("Last digit of %d is %d and is 0\n", n, ldigit);
	}
	return (0);
}
