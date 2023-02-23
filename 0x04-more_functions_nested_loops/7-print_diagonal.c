#include "main.h"

/**
 * print_diagonal - Prints a diagonal in the terminal
 * @n: The number of times we should print \
 *
 * Return: nothing to return
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar(92);
		        _putchar('\n');
		}
	}
}
