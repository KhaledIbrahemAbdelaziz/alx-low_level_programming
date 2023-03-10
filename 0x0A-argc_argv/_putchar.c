#include "main.h"
#include <stdio.h>

/**
 * _putchar - Prints the character in the stdout.
 * @c: The character to print.
 * Return: 1 On success and -1 On error and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
