#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: pointer to the file
 * @text_content: the content to put in the file
 * Return: 1
*/

int create_file(const char *filename, char *text_content)
{
	int file, len, writing;

	/*check if there is a pointer*/
	if (filename == NULL)
		return (-1);
	/*create the file and open it */
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);
	/*write the content in it*/
	if (text_content)
	{
		for (len = 0; text_content[len] != '\0'; len++)
		;
		writing = write(filename, text_content, len);
		if (writing == -1)
			return (-1);
	}
	close(file);
	return (1);
}
