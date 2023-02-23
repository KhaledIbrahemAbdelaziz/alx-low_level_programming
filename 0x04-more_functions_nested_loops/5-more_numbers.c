#include "main.h"

/**
 * more_numbers - Prints the numbers from 0 to 14 10 times
 *
 * Return: nothing to return
 */

void more_numbers(void)
{
	int i = 0;

	int j;

	while (i < 10)
	{
		for (j = 0; j < 15; j++)
			_putchar(j + '0');
		_putchar('\n');
		i++;
	}
}
