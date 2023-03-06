#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes the character c in the stdout.
 * @c: The character that will be printed.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
