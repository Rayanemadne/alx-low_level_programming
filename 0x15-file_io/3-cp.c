#include "main.h"

#define BUFSIZE 1024

/*RAYANE - MAD*/

/**
 * main - copy file to another
 *
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int file_from, file_to, reading, cl_form, cl_to;
	char buffer[BUFSIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((reading = read(file_from, buffer, BUFSIZE)) > 0)
	{
		if (file_to < 0 || write(file_to, buffer, reading) != reading)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_from);
			exit(99);
		}
	}
	if (reading < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	cl_form = close(file_from);
	cl_to = close(file_to);
	if (cl_form < 0 || cl_to < 0)
	{
		if (cl_form < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		if (cl_to < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
