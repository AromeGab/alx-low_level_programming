#include "main.h"

/**
 * append_text_to_file - this function appends text at the end of a file
 * @filename:  is the name of the file
 * @text_content: is the NULL terminated string to add to the end of file
 * Return: 1 if succesful,
 *	 -1 if unsuccesful, or if user lacks write permissions,
 *	 -1 if file does not exist.
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
