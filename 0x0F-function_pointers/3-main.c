#include "3-calc.h"
#include <string.h>
#include <stdlib.h>

/*RAYANE - MAD*/

/**
 * main - here chere the magic happen
 *
 * @argc: number of argument
 * @argv: the arguments
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;

	/*error not enough argument*/
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/*give the values*/
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	/* Error if operator is not null */
	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	/* Error if user tries to divide / (47) or % (37) by 0*/
	if ((*operator == 47 || *operator == 37) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	/*print the result*/
	printf("%d\n", get_op_func(operator)(num1, num2));

	return (0);

}
