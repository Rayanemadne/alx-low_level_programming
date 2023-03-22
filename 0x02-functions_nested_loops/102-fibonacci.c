#include "main.h"

/**
 * main- fibonnacci
 *
 * Description: fibonnaci formula cherche it on google
 *
 * Return: 0
*/

int main(void)
{
	int i;
	int f1 = 0, f2 = 1, sum;

	for (i = 0 ; i < 50; i++)
	{
		sum = f1 + f2;
		printf("%d", sum);

		f1 = f2;
		f2 = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
