#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The number to be printed
 *
 * Return: nothing to return
 */

void print_number(int n)
{
	unsigned int num = n;
	if (n < 0)
	{
		_putchar('-');
		num = num - num;
	}
	if ((num / 10) > 0)
	{
		print_number(num /10);
	}
	_putchar((num % 10) + '0');
}
