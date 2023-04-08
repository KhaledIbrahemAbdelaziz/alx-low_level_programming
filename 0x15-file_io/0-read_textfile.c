#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file
 * and prints it to the POSIX standard output.
 * @filename: The file name pointer to the file.
 * @letters: The number of letters in the file that should read.
 * Return: the actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opens, reads, writes;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	opens = open(filename, O_RDONLY);
	reads = read(opens, buffer, letters);
	writes = write(STDOUT_FILENO, buffer, reads);
	if (opens == -1 || reads == -1 || writes == -1 || writes != reads)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(opens);
	return (writes);
}
