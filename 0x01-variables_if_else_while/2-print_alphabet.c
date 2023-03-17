#include <stdio.h>

/**
 * main - Alphabet kido
 *
 * Description: print alphabet
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int al;
	for (al = 'a'; al <= 'z'; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
