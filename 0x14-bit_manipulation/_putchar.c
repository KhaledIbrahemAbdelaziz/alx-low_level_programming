#include "main.h"
#include <unistd.h>

/**
 * _putchar - Prints the character c in the stdout.
 * @c: The character to be printed.
 * Return: 1 On success or -1 On error
 * and the errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
