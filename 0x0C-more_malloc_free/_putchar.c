#include "main.h"
#include <unistd.h>

/**
 * _putchar - Prints the character in the stdout.
 * @c: The character to print.
 * Return: 1 On success, -1 On error and the errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
