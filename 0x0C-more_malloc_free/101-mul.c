#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*RAYANE - MAD*/

/**
 * checknum - check if its a digit
 * @n: input
 * Return: 0 if digit
*/

int checknum(char n[])
{
	int i, len = strlen(n);

	for (i = 0; i < len; i++)
	{
		if (!isdigit(n[i]))
		{
			return (1);
		}
	}
	return (0);
}

/**
 * main - welcome to brain pain
 *
 * @argc: number of argument
 * @argv: the arguments
 *
 * Return: 0 success
*/
int main(int argc, char *argv[])
{
	char *s1, s2;
	int len1, len2;

	/*if not egnough arg print Error \n + exit(98)*/
	if (argc < 2)
	{
		printf("Error\n");
		exit(98);
	}
	/*if argument not digit print Error \n and exit(98) */
	if (checknum(argv[1]) == 1)
	{
		printf("Error\n");
		exit(98);
	}

	if (checknum(argv[2]) == 1)
	{
		printf("Error\n");
		exit(98);
	}

	/*allocat memory for nm1 nm2 and mul*/
	s1 = argv[1];
	s2 = argv[2];

	/*get the number passt by arg and calculat*/
	int *mul = malloc(len1 + len2);
	mul = atoi(s1) * atoi(s2);

	/* print result + new line */

	printf("%d\n", mul);
	return (0);
}
