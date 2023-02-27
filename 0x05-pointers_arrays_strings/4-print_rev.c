#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: The char pointer for the string
 * Return: nothing to return
 */
void print_rev(char *s)
{
	int len;

	len = _strlen(s);
	while (*s != '\0')
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
