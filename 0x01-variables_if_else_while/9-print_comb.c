#include <stdio.h>

/**
 * main - 0 to 9 v3
 *
 * Description: printing 0 - 9 with ,
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
