#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: The char pointer for the string
 * Return: nothing to return
 */

void print_rev(char *s)
{
	int len, i;

	len = 0;
	while (s[len] != '\0')
		len++;

	for (i = len - 1; i >= 0; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
