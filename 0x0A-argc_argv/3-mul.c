#include "main.h"

/*RAYANE - MAD*/

/**
 * main -  multiplies two numbers
 *
 * Description: print the result of the multiplication
 * @argc: number of arguments
 * @argv: array that contain all the argument
 *
 * Return: 0 (Success) and 1 if not enough argument
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	int sum = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", sum);

	return (0);
}
