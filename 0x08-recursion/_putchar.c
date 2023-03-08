#include "main.h"
#include <unistd.h>

/**
 * _putchar - Prints the characters we want
 * @c: The character to be printed
 * 
 * Return: 1 On success
 * On error -1 and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
