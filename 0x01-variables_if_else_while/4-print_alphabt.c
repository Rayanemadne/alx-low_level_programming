#include <stdio.h>

/**
 * main - alphab t where is the e ? and the q
 *
 * Description: this program print all alphabet except e and q
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int al;

	for (al = 'a'; al <= 'z'; al++)
	{
		if (al == 'e' || al == 'q')
		{
			al++;
		}
		putchar(al);	
	}
	putchar('\n');
	return (0);
}
