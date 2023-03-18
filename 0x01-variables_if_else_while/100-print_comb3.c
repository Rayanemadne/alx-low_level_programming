#include <stdio.h>

/**
 * main - combinator
 *
 * Description: print combination
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int i, j;

	i = 0;

	while (i <= 9)
	{
		j = i;
		while (j <= 9)
		{
			if (i != j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i != 56 && j != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
