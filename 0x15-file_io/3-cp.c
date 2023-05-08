#include "main.h"

/*RAYANE - MAD*/

/**
 * _exit - prints error messages
 *
 * @error: the exit number or file descriptor
 * @str: either file_in or file_out
 * @fd: file descriptor
 *
 * Return: 0
*/
int _exit(int error, char *str, int fd)
{
	switch (error)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(error);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
			exit(error);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
			exit(error);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(error);
		default:
			return (0);
	}
}

/**
 * main - create a copy of file
 *
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int file_in, file_out;
	int read_stat, write_stat;
	int close_in, close_out;
	char buffer[1024];

	/*if arguments are not 3*/
	if (argc != 3)
		_exit(97, NULL, 0);
	/*sets file descriptor for copy from file*/
	file_in = open(argv[1], O_RDONLY);
	if (file_in == -1)
		_exit(98, argv[1], 0);
	/*sets file descriptor for copy to file*/
	file_out = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_out == -1)
		_exit(99, argv[2], 0);
	/*reads file_in as long as its not NULL*/
	while ((read_stat = read(file_in, buffer, 1024)) != 0)
	{
		if (read_stat == -1)
			_exit(98, argv[1], 0);
		/*copy and write contents to file_out*/
		write_stat = write(file_out, buffer, read_stat);
		if (write_stat == -1)
			_exit(99, argv[2], 0);
	}
	/*close file_in*/
	close_in = close(file_in);
	if (close_in == -1)
		_exit(100, NULL, file_in);
	/*close file_out*/
	close_out = close(file_out);
	if (close_out == -1)
		_exit(100, NULL, file_out);

	return (0);
}
