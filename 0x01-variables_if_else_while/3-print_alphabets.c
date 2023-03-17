#include <stdio.h>

/**
 * main - alphalowup
 *
 * Description: print alphabet lowercase and uppercase
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int al;

	for (al = 'a' ; al <= 'z'; al++)
	{
		putchar(al);
	}
	for (al = 'A'; al <= 'Z'; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
