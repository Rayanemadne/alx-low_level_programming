#include "main.h"

/*RAYANE - MAD*/

/**
 * append_text_to_file - appends text at the end
 * @filename: pointer to the file
 * @text_content: content to add to file
 * Return: 1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file, app_status, words = 0;

	/*check if there is a file*/
	if (filename == NULL)
		return (-1);

	/*open file with append*/
	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1) /*check if file is present*/
		return (-1);

	/*append content to file*/
	if (text_content)
	{
		while (text_content[words] != '\0')
			words++;

		app_status = write(file, text_content, words);
		if (app_status == -1)
			return (-1);
	}

	close(file);
	return (1);
}
