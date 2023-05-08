#include "main.h"

/*RAYANE - MAD*/

/**
 * read_textfile - print text file into POSIX
 * @filename: the pointer to the file
 * @letters: the number of letter to print
 * Return: number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t reading, writing;
	char *buffer; /*the necessary space to get all the caracters*/
	/*if file == null*/
	if (filename == NULL)
		return (0);
	/*open the file*/
	file = open(filename, O_RDONLY); 
	/*if opening fail*/
	if (file == -1)
		return (0);
	/*allocate space from the number of letter*/
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	/*read the file*/
	reading = read(file, buffer, letters);
	if (reading == -1)
		return (0);
	/*write the output*/
	writing = write(STDOUT_FILENO, buffer, reading);
	if (writing == -1 || reading != writing)
		return (0);
	/*freeing the buffer*/
	free(buffer);
	/*closing the file*/
	close(file);
	return (writing);
}
