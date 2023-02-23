#include "main.h"

/**
 * print_line - Prints a straight line in the terminal
 * @n: The number of times the character (_) will print
 *
 * Return: nothing to return
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
