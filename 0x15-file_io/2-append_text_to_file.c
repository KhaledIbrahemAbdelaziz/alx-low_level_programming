#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: The pointer to the file.
 * @text_content: The text to be written.
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int opens, writes, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	opens = open(filename, O_WRONLY | O_APPEND);
	writes = write(opens, text_content, len);
	if (opens == -1 || writes == -1)
		return (-1);
	close(opens);
	return (1);
}
