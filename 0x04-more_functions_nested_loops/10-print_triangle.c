#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: The size of the triangle
 *
 * Return: nothing to return
 */

void print_triangle(int size)
{
	int i, j;

	if (i <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('#');
			_putchar('\n');
		}
	}
}
