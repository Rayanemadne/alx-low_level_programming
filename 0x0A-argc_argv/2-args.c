#include "main.h"

/*RAYANE - MAD*/

/**
 * main -  all arguments
 *
 * Description:  prints all arguments
 * @argc: number of arguments
 * @argv: array that contain all the argument
 *
 * Return: 0 (Success)
*/

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
