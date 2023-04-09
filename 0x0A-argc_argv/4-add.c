#include "main.h"

/*RAYANE - MAD*/

/**
 * checkNum - check a string if its full digit
 *
 * Description: check a string if its full digit
 *
 * @num: the string
 *
 * Return: 0 if it's numbers
*/

int checkNum(char num[])
{
	int i = 0;
	int l = strlen(num);

	for (i = 0; i < l; i++)
	{
		if (!isdigit(num[i]))
		{
			return (1);
		}
	}
		return (0);
}

/**
 * main -  adds positive numbers
 *
 * Description: Print the result
 *
 * @argc: number of arguments
 * @argv: array that contain all the argument
 *
 * Return: 0 (Success) and 1 if not enough argument
*/



int main(int argc, char *argv[])
{
	int sum;
	int i;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			if (checkNum(argv[i]) == 0)
			{
				sum = sum + atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d", sum);
	}

	return (0);
}
