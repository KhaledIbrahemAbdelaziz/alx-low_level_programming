#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void closing_file(int fd);

/**
 * closing_file - To closing a file
 * @fd: The file descriptor to be closed.
 * Return: nothing to return.
 */

void closing_file(int fd)
{
	int closes;

	closes = close(fd);
	if (closes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 * Return: 0 On Success.
 */

int main(int argc, char *argv[])
{
	int from, to, reads, writes;
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", buffer);
		exit(99);
	}
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	reads = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || reads == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		writes = write(to, buffer, reads);
		if (writes == -1 || to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		reads = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (reads > 0);
	free(buffer);
	closing_file(from);
	closing_file(to);
	return (0);
}
